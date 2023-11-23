
# Custom Printf Function

## Overview

This is a simplified implementation of the `printf` function in the C programming language. The `_printf` function allows users to print formatted output by specifying format specifiers in a manner similar to the standard `printf` function.

## Files

- **main.h**: Header file containing function declarations and a structure definition.
- **_printf.c**: Function file used to call the appropriate functions to print characters based on the type of inputs. Return the total number of characters printed.
- **_putchar.c**: Utility function used to print individual characters.
- **print_string.c**: Function handling the printing of strings of characters.
- **print_char.c**: Function handling the printing of individual characters.
- **printd_int.c**: Function handling the printing of decimal integers.
- **printi_int.c**: Function handling the printing of integers.
- **print_modulo.c**: Function handling the printing of the modulo symbol.


## Usage

To use this custom `printf` implementation, include the `main.h` header file in your program. Then, call the `_printf` function with the desired format string and arguments.

```c
#include "main.h"

int main() {
    _printf("Hello, %s!\n", "world");
    _printf("Number: %d\n", 42);

    return 0;
}
``````
# Custom Printf Function

## Overview

This is a simplified implementation of the `printf` function in the C programming language. The `_printf` function allows users to print formatted output by specifying format specifiers in a manner similar to the standard `printf` function.

## Supported Format Specifiers

| Specifier | Description                      |
| :-------- | :------------------------------- |
| `%c`      | Print a character.               |
| `%s`      | Print a string.                  |
| `%%`      | Print a percent sign.            |
| `%i`      | Print an integer.                |
| `%d`      | Print an integer.                |

## Functions

| Function              | Description                                          |
| :-------------------- | :--------------------------------------------------- |
| **_printf**           | Main function that parses the format string and prints the formatted output. |
| **print_char**        | Function to print a character.                       |
| **print_string**      | Function to print a string.                           |
| **print_modulo**      | Function to print a percent sign.                     |
| **printd_int**        | Function to print an integer.                         |
| **printi_int**        | Function to print an integer.                         |



## Notes

- This implementation uses a simple array of structures (`format_list`) to map format specifiers to their corresponding functions.
- Make sure to include the correct header file and link the source file when using this implementation in your program.

## Building and Running

To build the program, you can use a standard C compiler. For example, using `gcc`:

```bash
gcc *.c -o _printf
``````
And then run the executable:
```
./_printf
```
## Flowchart
![flowchart]/https://github.com/TaillepierreN/holbertonschool-printf/blob/main/flowchart.png
## Contributing

If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request. Contributions are welcome!

## Acknowledgments

This project draws inspiration from the standard printf function in the C Standard Library.

## Contact

For any inquiries or feedback, you can contact the project maintainer:

GitHub: https://github.com/TaillepierreN/holbertonschool-printf

## License

This project is licensed under the Holberton School - see the LICENSE file for details.

## 🔗 Links

[![github](https://img.shields.io/badge/Nicolas_Github-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/TaillepierreN)

[![github](https://img.shields.io/badge/Alexandre_Github-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://github.com/SuperPims?tab=repositories)

#include "main.h"

/**
 * _printf - print the data passed as arguments
 * @format: character string that contain zero or more directive
 * for the output
 * Return: (0) sucess
 */

int _printf(const char *format, ...)
{
    format_list formats[] = {
        {'c', print_char},
        {'s', print_string},
        {'\0', NULL}
    };
}
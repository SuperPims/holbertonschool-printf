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
        {'%', print_modulo},
        {'i', printi_int},
        {'d', printd_int},
        {'\0', NULL}
    };

    int i = 0, j = 0;
    va_list formatlist;

    va_start(formatlist, format);
    while (format != NULL && format[i] != '\0')
    {
        if (format[i] == '%')
        {
            return(1); /*temporary*/
        }
        else
        {
            putchar(format[i]);
     
        }
    i++;
    }
}


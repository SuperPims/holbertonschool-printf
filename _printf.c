#include "main.h"

/**
 * _printf - print the data passed as arguments
 * @format: character string that contain zero or more directive
 * for the output
 * Return: int, number of printed char
 */

int _printf(const char *format, ...)
{
	format_list format_table[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_modulo},
		{'i', printi_int},
		{'d', printd_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexa_lowercase},
		{'X', print_hexa_uppercase},
		{'\0', NULL}};
	int i = 0, j = 0, nbrprint = 0;
	va_list formatlist;

	if (format == NULL || !format[i + 1])
		return (-1);
	va_start(formatlist, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; format_table[j].charac != '\0'; j++)
			{
				if (format[i + 1] == format_table[j].charac)
				{
					nbrprint += format_table[j].func(formatlist);
					i++;
					break;
				}
			}
			if (format_table[j].charac == '\0')
				nbrprint += _putchar(format[i]);
		}
		else
			nbrprint += _putchar(format[i]);
	}
	va_end(formatlist);
	return (nbrprint);
}

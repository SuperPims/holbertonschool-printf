#include "main.h"

/**
 * _printf - print the data passed as arguments
 * @format: character string that contain zero or more directive
 * for the output
 * Return: int, number of printed char
 */

int _printf(const char *format, ...)
{
	format_list formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_modulo},
		{'i', printi_int},
		{'d', printd_int},
		{'\0', NULL}};
	int i = 0, j = 0, nbrprint = 0;
	va_list formatlist;

	if (format == NULL)
		return (-1);
	va_start(formatlist, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		if (format[i] == '%')
		{
			while (formats[j].charac != '\0')
			{
				if (format[i + 1] == formats[j].charac)
				{
					nbrprint += formats[j].func(formatlist);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			putchar(format[i]);
			nbrprint++;
		}
		i++;
	}
	va_end(formatlist);
	return (nbrprint);
}


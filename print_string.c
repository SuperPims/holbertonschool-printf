#include "main.h"
#include <stdio.h>

/**
 * print_string - print a string
 * @args: Argument list containing the string to print
 * Return: Number of character printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	return (i);
}

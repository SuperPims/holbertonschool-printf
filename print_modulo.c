#include "main.h"
#include <stdio.h>

/**
 * print_modulo - print a modulo
 * @args: Argument list containing the integer to print
 * Return: Number of character printed
 */

int print_modulo(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}

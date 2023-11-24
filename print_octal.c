#include "main.h"

/**
 * print_octal - print an octal
 * @args: Argument list containing the unsigned int to print
 * Return: the number of character printed
 */

int print_octal(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	return (print_conversion(value, 8));
}

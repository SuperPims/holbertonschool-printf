#include "main.h"

/**
 * print_unsigned - print an unsigned int
 * @args: Argument list containing the unsigned int to print
 * Return: the number of character printed
 */
int print_unsigned(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	return (print_conversion(value, 10));
}


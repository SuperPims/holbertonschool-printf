#include "main.h"

/**
 * print_hexa_lowercase - print an hexadecimal lowercase
 * @args: Argument list containing the unsigned int to print
 * Return: the number of character printed
 */

int print_hexa_lowercase(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	return (print_conversion(value, 16));

}

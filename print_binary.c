#include "main.h"

/**
 * print_binary - print an unsigned int into binary
 * @args: Argument list containing the unsigned int to print
 * Return: the number of character printed
 */

int print_binary(va_list args)
{
	unsigned int value = va_arg(args, unsigned int), temp = 0;

	return (print_conversion(value, 2));

}

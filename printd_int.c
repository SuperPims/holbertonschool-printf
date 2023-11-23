#include "main.h"
#include <stdio.h>

/**
 * printd_int - Print an integer
 * @args: Argument list containing the integer to print
 * Return: Number of characters printed
 */
int printd_int(va_list args)
{
	int length = 0;
	int divisor = 1;

	int value = va_arg(args, int);

	if (value == 0)
	{
		return (_putchar('0'));
	}
	if (value < 0)
	{
		_putchar('-');
		length++;
		value = -value;
	}

	while (value / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		_putchar('0' + value / divisor);
		length++;
		value %= divisor;
		divisor /= 10;
	}

	return (length);
}

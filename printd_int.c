#include "main.h"
#include <stdio.h>

/**
 * printd_int - Print an integer
 * @args: Argument list containing the integer to print
 * Return: Number of characters printed
 */
int printd_int(va_list args)
{
	int lenght = 0;
	int divisor = 1;

	int value = va_arg(args, int);

	if (value < 0)
	{
		_putchar('-');
		lenght++;
		value = -value;
	}

	while (value / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		_putchar('0' + value / divisor);
		lenght++;
		value %= divisor;
		divisor /= 10;
	}

	return (lenght);
}

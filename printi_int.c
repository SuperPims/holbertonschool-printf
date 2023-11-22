#include "main.h"
#include <stdio.h>

/**
 * printi_int - Print an integer
 * @args: Argument list containing the integer to print
 * Return: Number of characters printed
 */
int printi_int(va_list args)
{
	int num = va_arg(args, int);
	int temp, intlength = 0, i = 0, minus = 0;
	char *intstring;

	if (num < 0)
	{
		_putchar('-');
		minus = 1;
		num = -num;
	}

	for (int temp = num; temp != 0 && ++intlength; temp /= 10)
		;

	intstring = malloc((intlength + 1) * sizeof(char));
	if (intstring == NULL)
		return (free(intstring), 0);

	for (i = intlength - 1; num != 0;
		intstring[i--] = (num % 10) + '0', num /= 10)
		;

	intstring[intlength] = '\0';

	for (i = 0; intstring[i] != '\0'; _putchar(intstring[i++]))
		;

	free(intstring);

	return (intlength + minus);
}

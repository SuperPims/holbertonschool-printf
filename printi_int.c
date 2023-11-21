#include "main.h"

/**
 * printi_int - Print an integer
 * @args: Argument list containing the integer to print
 * Return: Number of characters printed
 */
int printi_int(va_list args)
{
	int num = va_arg(args, int);
	int temp, intlength = 0, i = 0;
	char *intstring;

	if (num < 0)
	{
		putchar('-');
		num = -num;
	}

	temp = num;
	while (temp != 0)
	{
		temp = temp / 10;
		intlength++;
	}

	intstring = malloc((intlength + 1) * sizeof(char));
	if (intstring == NULL)
	{
		return 0;
	}

	i = intlength - 1;
	while (num != 0)
	{
		intstring[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	intstring[intlength] = '\0';


	i = 0;
	while (intstring[i] != '\0')
	{
		putchar(intstring[i]);
		i++;
	}

	free(intstring);

	return intlength;
}

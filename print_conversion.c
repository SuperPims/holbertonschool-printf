#include "main.h"

/**
 * print_conversion - print an unsigned int
 * @args: Argument list containing the unsigned int to print
 * Return: the number of character printed
 */

int print_conversion(unsigned int value, int base)
{
	char *str;
	int length = 0, i = 0;
	unsigned int temp = 0;

	temp = value;

	while (temp != 0)
	{
		temp = temp / 10;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	_itoa(value, str, base);

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	free(str);
	return (length);
}

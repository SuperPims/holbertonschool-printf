#include "main.h"

/**
 * print_hexa_uppercase - print an hexadecimal uppercase
 * @args: Argument list containing the unsigned int to print
 * Return: the number of character printed
 */

int print_hexa_uppercase(va_list args)
{
	unsigned int value = va_arg(args, unsigned int), temp;
	char *str;
	int length = 0, i = 0, j = 0;

	temp = value;
	while (temp != 0)
	{
		temp = temp / 10;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	_itoa(value, str, 16);
	for (j = 0; str[j] != 0; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] -= 32;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	free(str);

	return (length);

}

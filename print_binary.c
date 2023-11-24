#include "main.h"

int print_binary(va_list args)
{
	char *str;
	int length = 0, i = 0;
	unsigned int value = va_arg(args, unsigned int), temp = 0;

	temp = value;

	while (temp != 0)
	{
		temp = temp / 10;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	_itoa(value, str, 2);

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}

	return (length);
}
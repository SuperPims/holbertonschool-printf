#include "main.h"

int print_unsigned(va_list args)
{
	char *str;
	unsigned int value = va_arg(args, unsigned int);
	int i = 0, length = 0, temp = 0;

	temp = value;

	while (temp != 0)
	{
		temp = temp / 10;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	_itoa(value, str, 10);

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	free(str);
	return (length);
}

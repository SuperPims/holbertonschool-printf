#include "main.h"

/**
 * _itoa - integer to ascii
 * @num: integer to put in character
 * @str: string to store the characters
 * @base: base to convert to
 */

void *_itoa(unsigned int num, char *str, int base)
{
	int i = 0, remainder = 0, start = 0, end = 0;
	char temp;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (0);
	}

	while (num != 0)
	{
		remainder = num % base;
		if (remainder > 9)
			str[i++] = (remainder - 10) + 'a';
		else
			str[i++] = remainder + '0';
		num = num / base;
	}
	str[i] = '\0';

	end = i - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (0);
}
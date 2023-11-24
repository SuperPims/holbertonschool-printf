#include "main.h"

/**
 * _itoa - integer to ascii
 * @num: integer to put in character
 * @str: string to store the characters
 * @base: base to convert to
 */

char *_itoa(unsigned int num, char *str, int base)
{
	int i = 0, negative = 0, remainder = 0, start = 0, end = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return str;
	}
	if (num < 0 && base == 10)
	{
		negative = 1;
		num = -num;
	}
	while (num != 0)
	{
		int remainder = num % base;
		if (remainder > 9)
			str[i++] = (remainder - 10) + 'a';
		else
			str[i++] = remainder + '0';
		num = num / base;
	}
	if (negative)
		str[i++] = '-';
	str[i] = '\0';

	end = i - 1;
	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return str;
}
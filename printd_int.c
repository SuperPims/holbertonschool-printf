#include "main.h"
#include <stdlib.h>

char *_itoa(int num, char str[], int base)
{
	int i = 0, remaining = 0, start = 0, end = 0;
	char temp;

	if (num == 0)
	{
		str[i] = '0';
		i++;
		str[i] = '\0';
		return str;
	}
	while (num != 0)
	{
		remaining = num % base;
		str[i] = (remaining > 9) ? (remaining - 10) + 'a' : remaining + '0';
		i++;
		num = num / base;
	}
	str[i] = '\0';
	end = i - 1;
	while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
	return (str);

}
int printd_int(va_list args)
{
	int intd = va_arg(args, int), temp, intlength = 0, i = 0;
	char *intstring;

	if (intd < 0)
	{
		putchar('-');
		intd = -intd;
	}
	temp = intd;
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

	_itoa(intd, intstring, 10);

	while (intstring[i] != '\0')
	{
		putchar(intstring[i]);
		i++;
	}
	
	free(intstring);
	
	return (intlength);
}


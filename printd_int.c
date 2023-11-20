#include "main.h"

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

	itoa(intd, intstring, 10);

	while (intstring[i] != '\0')
	{
		putchar(intstring[i]);
		i++;
	}
	
	free(intstring)
	
	return (intlength);
}

#include "main.h"

/*define the printf_putchar function*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	puts(str);
	return (strlen(str) +1);
}	

#include "main.h"

/*define the printf_putchar function*/
int print_char(va_list args)
{
	char c = va_arg(args, int);
	putchar(c);
	return 0;
}

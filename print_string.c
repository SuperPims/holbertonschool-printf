#include "main.h"

/*define the printf_putchar function*/
int print_string(va_list args)
{
	 char *str = va_arg(args, char *);
    fputs(str, stdout);
    return strlen(str);
}	

#include "main.h"

int printd_int(va_list args)
{
	int intd = va_arg(args, int);
	puts(intd);
	return (strlen(intd + 1));
}

#include "main.h"

int printi_int(va_list args)
{
	int inti = va_arg(args, int);
	puts(inti);
	return (strlen(inti + 1));
}

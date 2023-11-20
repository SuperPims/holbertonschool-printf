#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

typedef struct formats
{
	char charac;
	void (*func)(va_list);
} format_list;

int _printf(const char *format, ...);

#endif // !MAIN_H
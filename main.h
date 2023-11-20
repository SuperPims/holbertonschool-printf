#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

typedef struct formats
{
	char charac;
	void (*func)(va_list);
} format_list;

/*fonction _printf*/
int _printf(const char *format, ...);

/*fonctions to print*/
int print_char(va_list args);
int print_string(va_list args);
int print_modulo(va_list args);
int printd_int(va_list args);
int printi_int(va_list args);

#endif // !MAIN_H
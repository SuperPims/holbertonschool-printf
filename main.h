#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct formats - struct that store differents format
 * that _printf can print and their respectives function
 *
 * @charac: the char that tells wich type is to be printed
 * @func: the function that will print the type associated
*/
typedef struct formats
{
	char charac;
	int (*func)(va_list args);
} format_list;

/*fonction _printf*/
int _printf(const char *format, ...);

/*fonctions to print*/
int print_char(va_list args);
int print_string(va_list args);
int print_modulo(va_list args);
int printd_int(va_list args);
int printi_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_conversion(unsigned int value, int base);
int _putchar(char c);
char *_itoa(unsigned int num, char *str, int base);

#endif

#include "main.h"

/**
 * print_char - print a char
 * @args: Argument list containing the character to print
 * Return: 0 (sucess)
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (0);
}

#include "main.h"

/**
 * print_string - print a string
 * @args: Argument list containing the string to print
 * Return: Number of character printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	fputs(str, stdout);
	return (strlen(str));
}

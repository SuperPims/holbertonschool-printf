#include "main.h"
#include <stdio.h>

/**
 * printi_int - Print an integer
 * @args: Argument list containing the integer to print
 * Return: Number of characters printed
 */
int printi_int(va_list args)
{
	return (printd_int(args));
}

#include "main.h"
/**
 * handle_char - handles the case c specifier
 * @args: args list
 * Return: the number of chars printed
 */
int handle_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

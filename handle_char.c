#include "main.h"
/**
 * handle_char - handles the case c specifier
 * @args: the argument list to get the char from
 * Return: the number of chars printed
 */
int handle_char(va_list args)
{
	char c = va_arg(args, int);

	return(_putchar(c));
}

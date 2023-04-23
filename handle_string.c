#include "main.h"

/**
 * handle_string - Handles the 's' specifier for _printf
 * @args: The argument list to get the string from
 * Return: The number of characters printed
 */
int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}

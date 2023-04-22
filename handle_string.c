#include "main.h"

/**
 * handle_string - Handles the 's' specifier for _printf
 * @args: The argument list to get the string from
 * Return: The number of characters printed
 */
int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, i;

	if (!str)
	{
		str = "(null)";
	}

	for (i = 0; str[i]; i++)
	{
		count += _putchar(str[i]);
	}

	return (count);
}

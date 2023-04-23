#include "main.h"
/**
 * handle_unsigned_int - Handles 'u' conversion specifier
 * @args: The argument list to get the string from
 * Return: The number of characters printed
 */
int handle_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_unsigned_int(num));
}

/**
 * print_unsigned_int - Prints an unsigned int
 * @num: The unsigned int to print
 * Return: The number of characters printed
 */
int print_unsigned_int(unsigned int num)
{
	unsigned int n = num;
	int count = 0;

	if (n / 10)
		count += print_unsigned_int(n / 10);
	count += _putchar((n % 10) + '0');

	return (count);
}

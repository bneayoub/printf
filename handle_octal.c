#include "main.h"

/**
 * handle_octal - Handles 'o' specifier
 * @args: The argument list to get the string from
 * Return: The number of characters printed
 */
int handle_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_octal(num));
}

/**
 * print_octal - Prints an unsigned int in octal
 * @num: The unsigned integer to print
 * Return: The number of characters printed
 */
int print_octal(unsigned int num)
{
	unsigned int n = num;
	int count = 0;

	if (n / 8)
		count += print_octal(n / 8);
	count += _putchar((n % 8) + '0');

	return (count);
}

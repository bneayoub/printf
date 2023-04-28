#include "main.h"

/**
 * handle_unsigned_int - Handles 'u' conversion specifier with length modifiers
 * @args: The argument list to get the string from
 * @length: The length modifier (l, h, or '\0' for none)
 * Return: The number of characters printed
 */
int handle_unsigned_int(va_list args, char length)
{
	unsigned long int num_l;
	unsigned short int num_h;
	unsigned int num;

	if (length == 'l')
	{
		num_l = va_arg(args, unsigned long int);
		return (print_unsigned_int_l(num_l));
	}
	else if (length == 'h')
	{
		num_h = (unsigned short int)va_arg(args, unsigned int);
		return (print_unsigned_int_h(num_h));
	}
	else
	{
		num = va_arg(args, unsigned int);
		return (print_unsigned_int(num));
	}
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

/**
 * print_unsigned_int_l - Prints an unsigned long int
 * @num_l: The unsigned long int to print
 * Return: The number of characters printed
 */
int print_unsigned_int_l(unsigned long int num_l)
{
	unsigned long int n = num_l;
	int count = 0;

	if (n / 10)
		count += print_unsigned_int_l(n / 10);
	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_unsigned_int_h - Prints an unsigned short int
 * @num_h: The unsigned short int to print
 * Return: The number of characters printed
 */
int print_unsigned_int_h(unsigned short int num_h)
{
	unsigned short int n = num_h;
	int count = 0;

	if (n / 10)
		count += print_unsigned_int_h(n / 10);
	count += _putchar((n % 10) + '0');

	return (count);
}

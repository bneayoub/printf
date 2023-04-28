#include "main.h"

/**
 * handle_octal - Handles 'o' specifier with length modifiers
 * @args: The argument list to get the string from
 * @flag: flag character
 * @length: The length modifier (l, h, or '\0' for none)
 * Return: The number of characters printed
 */
int handle_octal(va_list args, char flag, char length)
{
	unsigned long int num_l;
	unsigned short int num_h;
	unsigned int num;

	if (length == 'l')
	{
		num_l = va_arg(args, unsigned long int);
		return (print_octal_l(num_l, flag));
	}
	else if (length == 'h')
	{
		num_h = (unsigned short int)va_arg(args, unsigned int);
		return (print_octal_h(num_h, flag));
	}
	else
	{
		num = va_arg(args, unsigned int);
		return (print_octal(num, flag));
	}
}

/**
 * print_octal - Prints an unsigned int in octal
 * @num: The unsigned integer to print
 * @flag: flag character
 * Return: The number of characters printed
 */
int print_octal(unsigned int num, char flag)
{
	unsigned int n = num;
	int count = 0;

	if (flag == '#')
	{
		_putchar('0');
		count++;
	}

	if (n / 8)
		count += print_octal(n / 8, '\0');
	count += _putchar((n % 8) + '0');

	return (count);
}

/**
 * print_octal_l - Prints an unsigned long int in octal
 * @num_l: The unsigned long integer to print
 * @flag: flag character
 * Return: The number of characters printed
 */
int print_octal_l(unsigned long int num_l, char flag)
{
	unsigned long int n = num_l;
	int count = 0;

	if (flag == '#')
	{
		_putchar('0');
		count++;
	}

	if (n / 8)
		count += print_octal_l(n / 8, '\0');
	count += _putchar((n % 8) + '0');

	return (count);
}

/**
 * print_octal_h - Prints an unsigned short int in octal
 * @num_h: The unsigned short integer to print
 * @flag: flag character
 * Return: The number of characters printed
 */
int print_octal_h(unsigned short int num_h, char flag)
{
	unsigned short int n = num_h;
	int count = 0;

	if (flag == '#')
	{
		_putchar('0');
		count++;
	}

	if (n / 8)
		count += print_octal_h(n / 8, '\0');
	count += _putchar((n % 8) + '0');

	return (count);
}

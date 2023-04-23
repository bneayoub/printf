#include "main.h"
/**
 * handle_hex_lower - Handles the lowercase 'x' hex conversion specifier
 * @args: List of arguments
 * Return: The number of characters printed
 */
int handle_hex_lower(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_hex(num, 0));
}

/**
 * handle_hex_upper - Handles the uppercase 'X' hex conversion specifier
 * @args: List of arguments
 * Return: The number of characters printed
 */
int handle_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_hex(num, 1));
}

/**
 * print_hex - Prints an unsigned integer in hexadecimal
 * @num: The unsigned integer to print
 * @upper: 1 for uppercase letters, 0 for lowercase letters
 * Return: The number of characters printed
 */
int print_hex(unsigned int num, int upper)
{
	unsigned int n = num;
	int count = 0;
	char offset = upper ? 'A' - 10 : 'a' - 10;

	if (n / 16)
		count += print_hex(n / 16, upper);
	count += _putchar((n % 16) < 10 ? (n % 16) + '0' : (n % 16) + offset);

	return (count);
}

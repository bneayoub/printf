#include "main.h"
/**
 * handle_custom_S - Handles the custom 'S' conversion specifier
 * @args: args list
 *
 * Return: The number of characters printed
 */
int handle_custom_S(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0, i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			count += print_hex_char(s[i]);
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}

	return (count);
}
/**
 * print_hex_char - Prints an unsigned char as its hexadecimal value
 * @c: The character to print as hexadecimal
 *
 * Return: The number of characters printed
 */
int print_hex_char(unsigned char c)
{
	char hex_digits[] = "0123456789ABCDEF";
	int count = 0;

	_putchar('\\');
	_putchar('x');
	_putchar(hex_digits[(c >> 4) & 0xF]);
	_putchar(hex_digits[c & 0xF]);

	count += 4;

	return (count);
}

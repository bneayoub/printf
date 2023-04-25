#include "main.h"
/**
 * handle_specifier - Handles conversion specifiers
 * @specifier: The conversion specifier character
 * @args: The variable argument list
 * @flag: The flag character
 * Return: Count of characters printed
 */
int handle_specifier(char specifier, va_list args, char flag)
{
	int count = 0;

	switch (specifier)
	{
	case 'c':
		count += handle_char(args);
		break;
	case 's':
		count += handle_string(args);
		break;
	case '%':
		count += _putchar('%');
		break;
	case 'd':
	case 'i':
		count += handle_integer(args, flag);
		break;
	default:
		count += handle_specifier_ext(specifier, args, flag);
		break;
	}

	return (count);
}

/**
 * handle_specifier_ext - Handles extra conversion specifiers
 * @specifier: The conversion specifier character
 * @args: args list
 * @flag: The flag character
 * Return: Count of characters printed
 */
int handle_specifier_ext(char specifier, va_list args, char flag)
{
	int count = 0;

	switch (specifier)
	{
	case 'b':
		count += handle_binary(args);
		break;
	case 'u':
		count += handle_unsigned_int(args);
		break;
	case 'o':
		count += handle_octal(args, flag);
		break;
	case 'x':
		count += handle_hex_lower(args, flag);
		break;
	case 'X':
		count += handle_hex_upper(args, flag);
		break;
	case 'S':
		count += handle_custom_S(args);
		break;
	case 'p':
		count += handle_pointer(args);
		break;
	default:
		count += _putchar('%');
		count += _putchar(specifier);
		break;
	}

	return (count);
}

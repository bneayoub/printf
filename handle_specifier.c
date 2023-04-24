#include "main.h"
/**
 * handle_specifier - Handles conversion specifiers
 * @specifier: The conversion specifier character
 * @args: The variable argument list
 * Return: Count of characters printed
 */
int handle_specifier(char specifier, va_list args)
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
		count += handle_integer(args);
		break;
	default:
		count += handle_specifier_ext(specifier, args);
		break;
	}

	return (count);
}

/**
 * handle_specifier_ext - Handles extra conversion specifiers
 * @specifier: The conversion specifier character
 * @args: args list
 * Return: Count of characters printed
 */
int handle_specifier_ext(char specifier, va_list args)
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
		count += handle_octal(args);
		break;
	case 'x':
		count += handle_hex_lower(args);
		break;
	case 'X':
		count += handle_hex_upper(args);
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

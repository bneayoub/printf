#include "main.h"
/**
 * handle_specifier - Handles conversion specifiers
 * @specifier: The conversion specifier character
 * @args: The variable argument list
 * Return: Count of characters printed
 */
int handle_specifier(char specifier, va_list args)
{
	int count = -1;

	switch (specifier)
	{
	case 'c':
		count = handle_char(args);
		break;
	case 's':
		count = handle_string(args);
		break;
	case '%':
		count = _putchar('%');
		break;
	case 'd':
	case 'i':
		count = handle_integer(args);
		break;
	case 'b':
		count = handle_binary(args);
		break;
	case 'u':
		count = handle_unsigned_int(args);
		break;
	case 'o':
		count = handle_octal(args);
		break;
	case 'x':
		count = handle_hex_lower(args);
		break;
	case 'X':
		count = handle_hex_upper(args);
		break;
	case 'S':
		count = handle_custom_S(args);
		break;
	default:
		count = -1;
		break;
	}
	return (count);
}

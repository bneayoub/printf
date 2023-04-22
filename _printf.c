#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - implementation of printf from scratch
 * @format: the string containing specifiers
 * Return: count of carachters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *p;
	int count = 0;

	va_start(args, format);
	for (p = format; *p; ++p)
	{
		if (*p == '%')
		{
			++p;
			if (*p == '\0')
				break;
			switch (*p)
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
			default:
				count += _putchar(*p);
				break;
			}
		}
		else
			count += _putchar(*p);
	}
	va_end(args);
	return (count);
}

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
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*format)
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
					count+= _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

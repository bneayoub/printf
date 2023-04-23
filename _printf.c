#include "main.h"

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
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_specifier(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

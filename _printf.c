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
			if (*format == '\0')
			{
				count = -1;
				break;
			}
			else if (*format == ' ')
			{
				count = -1;
				break;
			}
			else
			{
				int result = handle_specifier(*format, args);

				if (result == -1)
				{
					count = -1;
					break;
				}
				count += result;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

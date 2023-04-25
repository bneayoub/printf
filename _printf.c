#include "main.h"
/**
 * _printf - implementation of printf from scratch
 * @format: the string containing specifiers
 * Return: count of characters printed
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
			if (*format == ' ')
			{
				count = -1;
				break;
			}
			int result = handle_flag_and_specifier(&format, args, &count);

			if (result == -1)
			{
				count = -1;
				break;
			}
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

/**
 * handle_flag_and_specifier - Handles flag chars and specifiers
 * @format: Pointer to the current position in the format string
 * @args: args list
 * @count: Pointer to the count of characters printed so far
 *
 * Return: 0 on success, -1 on error
 */
int handle_flag_and_specifier(const char **format, va_list args, int *count)
{
	char flag = '\0';

	if (**format == '+' || **format == ' ' || **format == '#')
	{
		flag = **format;
		(*format)++;
	}
	else
	{
		flag = '\0';
	}

	int result = handle_specifier(**format, args, flag);

	if (result == -1)
		return (-1);

	*count += result;

	return (0);
}

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
 * _putchar - prints char
 * @s: char to be printed
 * Return: char
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}

/**
 * _printf - implementation of printf from scratch
 * @format: string to format
 * Return: count of carachters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				_putchar((char)va_arg(args, int));
				j++;
				break;
			case 's':
				str = va_arg(args, char *);
				write(1, str, strlen(str));
				j = j + strlen(str);
				break;
			case '%':
				_putchar('%');
				j++;
				break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}

#include "main.h"

/**
 * handle_string - Handles the 's' specifier for _printf
 * @args: The argument list to get the string from
 * Return: The number of characters printed
 */
int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		if (str[i] == '\\')
		{
			i++;
			switch (str[i])
			{
			case 'n':
				count += _putchar('\n');
				break;
			case 't':
				count += _putchar('\t');
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				count += _putchar('\\');
				count += _putchar(str[i]);
				break;
			}
		}
		else
		{
			count += _putchar(str[i]);
		}
		i++;
	}
	return (count);
}

#include "main.h"

/**
 * handle_string - Handles the 's' specifier for _printf
 * @args: The argument list to get the string from
 * Return: The number of characters printed
 */
int handle_string(va_list args)
{
	unsigned char *str = va_arg(args, unsigned char *);
	int count = 0, i;

	if (!str)
		str = (unsigned char *)"(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] > 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar("0123456789ABCDEF"[str[i] / 16]);
			count += _putchar("0123456789ABCDEF"[str[i] % 16]);
		}
		else if (str[i] == '\\')
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
			count += _putchar(str[i]);
	}
	return (count);
}

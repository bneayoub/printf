#include "main.h"
/**
 * _print_integer - prints an integer using recursion
 * @n: int to print
 * @count: pointer to count of chars printed
 * @flag: flag + or space
 * @is_start: 1 or 0 when recursion starts
 */
void _print_integer(long int n, int *count, char flag, int is_start)
{
	if (is_start)
	{
		if (n < 0)
		{
			_putchar('-');
			(*count)++;
			n = -n;
		}
		else if (flag == '+' || flag == ' ')
		{
			_putchar(flag);
			(*count)++;
		}
	}

	if (n / 10)
	{
		_print_integer(n / 10, count, flag, 0);
	}
	_putchar('0' + (n % 10));
	(*count)++;
}

/**
 * handle_integer - handles the case d and i specifiers
 * @args: the argument list to get the integer from
 * @flag: flag character
 * @length_modifier: length modifier character
 * Return: the number of chars printed
 */
int handle_integer(va_list args, char flag, char length_modifier)
{
	long int n;
	int count = 0;

	switch (length_modifier)
	{
	case 'l':
		n = va_arg(args, long int);
		break;
	case 'h':
		n = (short int)va_arg(args, int);
		break;
	default:
		n = va_arg(args, int);
		break;
	}

	if (n == 0)
	{
		if (flag == '+' || flag == ' ')
		{
			_putchar(flag);
			count++;
		}
		_putchar('0');
		return (count + 1);
	}

	if (n == LONG_MIN)
	{
		_putchar('-');
		_putchar('9');
		_print_integer(223372036854775808, &count, flag, 0);
		count += 2;
		return (count);
	}

	_print_integer(n, &count, flag, 1);

	return (count);
}

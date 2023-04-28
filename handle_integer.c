#include "main.h"
/**
 * _print_integer - prints an integer using recursion
 * @n: int to print
 * @count: pointer to count of chars printed
 */
void _print_integer(int n, int *count, char flag)
{
	if (n < 0)
	{
		_putchar('-');
		(*count)++;
		n = -n;
	}
	else if (flag == '+' || (flag == ' ' && *count == 0))
	{
		_putchar(flag);
		(*count)++;
	}
	if (n / 10)
	{
		_print_integer(n / 10, count, '\0');
	}
	_putchar('0' + (n % 10));
	(*count)++;
}

/**
 * handle_integer - handles the case d and i specifiers
 * @args: the argument list to get the integer from
 * @flag: flag character
 * Return: the number of chars printed
 */
int handle_integer(va_list args, char flag)
{
	int n = va_arg(args, int);
	int count = 0;

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

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	else if (flag == '+' || flag == ' ')
	{
		_putchar(flag);
		count++;
	}

	if (n == INT_MIN)
	{
		_putchar('2');
		_print_integer(147483648, &count, flag);
		count += 1;
		return (count);
	}

	_print_integer(n, &count, flag);

	return (count);
}

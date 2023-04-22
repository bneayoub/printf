#include "main.h"
/**
 * _print_integer - prints an integer using recursion
 * @n: int to print
 * @count: pointer to count of chars printed
 */
void _print_integer(int n, int *count)
{
	if (n < 0)
	{
		_putchar('-');
		(*count)++;
		n = -n;
	}
	if (n / 10)
	{
		_print_integer(n / 10, count);
	}
	_putchar('0' + n % 10);
	(*count)++;
}

/**
 * handle_integer - handles the case d and i specifiers
 * @args: the argument list to get the integer from
 * Return: the number of chars printed
 */
int handle_integer(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	_print_integer(n, &count);

	return (count);
}

#include "main.h"
/**
 * handle_binary - Handles the 'b' specifier
 * @args: args list
 * Return: number of chars printed
 */
int handle_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	unsigned int mask = 1u << 31;

	while ((mask & n) == 0 && mask != 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		if ((n & mask) == 0)
			count += _putchar('0');
		else
			count += _putchar('1');

		mask >>= 1;
	}

	if (count == 0)
		count += _putchar('0');

	return (count);
}

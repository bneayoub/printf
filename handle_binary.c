#include "main.h"
/**
 * handle_binary - Handles the 'b' specifier
 * @args: The argument list to get the integer from
 * Return: number of chars printed
*/
int handle_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	unsigned int mask = 1u << (sizeof(unsigned int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) == 0)
			count += _putchar('0');
		else
			count += _putchar('1');

		mask >>= 1;
	}
	return (count);
}

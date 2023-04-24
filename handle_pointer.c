#include "main.h"

/**
 * handle_pointer - Handles the 'p' specifier
 * @args: args list
 * Return: The number of characters printed
 */
int handle_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	uintptr_t address = (uintptr_t)ptr;
	char buffer[32];
	int i;
	int count = 0;
	int idx;
	int digit;

	count += _putchar('0');
	count += _putchar('x');

	if (address == 0)
	{
		count += _putchar('0');
		return count;
	}

	idx = 0;
	while (address)
	{
		digit = address % 16;
		buffer[idx++] = (digit < 10) ? '0' + digit : 'a' + (digit - 10);
		address /= 16;
	}

	for (i = idx - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}

	return count;
}

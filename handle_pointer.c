#include "main.h"

/**
 * handle_pointer - Handles the 'p' specifier
 * @args: args list
 * Return: The number of characters printed
 */
int handle_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	uintptr_t address;
	char hex_buffer[16];
	int count = 0;
	int idx;
	int i;

	if (ptr == NULL)
	{
		char *null_str = "(nil)";
		for (i = 0; null_str[i] != '\0'; i++)
		{
			count += _putchar(null_str[i]);
		}
		return count;
	}

	count += _putchar('0');
	count += _putchar('x');

	idx = 0;
	while (address > 0)
	{
		int remainder = address % 16;
		if (remainder < 10)
			hex_buffer[idx++] = remainder + '0';
		else
			hex_buffer[idx++] = remainder - 10 + 'a';
		address /= 16;
	}
	for (i = idx - 1; i >= 0; i--)
	{
		count += _putchar(hex_buffer[i]);
	}

	return (count);
}

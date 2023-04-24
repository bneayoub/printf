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
	int count = 0;
	char hex_buffer[16];
	int idx = 0;
	int i;
	char *s;

	if (ptr == NULL)
	{
		s = "(nil)";
		for (i = 0; s[i] != '\0'; i++)
		{
			count += _putchar(s[i]);
		}
		return (count);
	}

	count += _putchar('0');
	count += _putchar('x');

	while (address > 0)
	{
		int remainder = address % 16;

		if (remainder < 10)
			hex_buffer[idx++] = '0' + remainder;
		else
			hex_buffer[idx++] = 'a' + (remainder - 10);

		address /= 16;
	}
	for (i = idx - 1; i >= 0; i--)
	{
		count += _putchar(hex_buffer[i]);
	}

	return (count);
}

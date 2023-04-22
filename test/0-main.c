#include "../main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int length;
	int length2;

	length = _printf("This is a string: %s\n", "project by Ayoub - Hala");
	length2 = printf("This is a string: %s\n", "project by Ayoub - Hala");
	_printf("Length of our _printf: \n");
	printf("%d\n", length);
	printf("Length of original printf: \n");
	printf("%d\n", length2);

	length = _printf("This is a character: %c\n", 'A');
	length2 = printf("This is a character: %c\n", 'A');
	_printf("Length of our _printf: \n");
	printf("%d\n", length);
	printf("Length of original printf: \n");
	printf("%d\n", length2);

	length = _printf("This is a percent sign: %%\n");
	length2 = printf("This is a percent sign: %%\n");
	_printf("Length of our _printf: \n");
	printf("%d\n", length);
	printf("Length of original printf: \n");
	printf("%d\n", length2);

	return (0);
}

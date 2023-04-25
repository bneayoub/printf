#include "../main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("-> SINGLE CHARS CASE <-\n");
	printf("-------------------\n");
	_printf("%c\n", 'H');
	printf("%c\n", 'H');
	printf("\n\n");
	_printf("%c%c%c%c%c%c%c%c%c%c\n", 'H', 'A', 'L', 'A', '-', 'A', 'Y', 'O', 'U', 'B');
	printf("%c%c%c%c%c%c%c%c%c%c\n", 'H', 'A', 'L', 'A', '-', 'A', 'Y', 'O', 'U', 'B');

	return (0);
}

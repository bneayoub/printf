#include "../main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int num1 = 45, num2 = -100, num3 = 0;
    unsigned int num4 = 12345;

    _printf("num1 in binary: %b\n", num1);
    _printf("num2 in binary: %b\n", num2);
    _printf("num3 in binary: %b\n", num3);
    _printf("num4 in binary: %b\n", num4);
	_putchar('\n');
	printf("num1 in binary: %b\n", num1);
    printf("num2 in binary: %b\n", num2);
    printf("num3 in binary: %b\n", num3);
    printf("num4 in binary: %b\n", num4);
    return (0);
}

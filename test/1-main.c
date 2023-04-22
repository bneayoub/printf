#include "../main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n = 123456;
    int m = -182;

    printf("%d\n", n);
    _printf("%d\n", n);
    printf("%i\n", n);
    _printf("%i\n", n);

    printf("%d\n", m);
    _printf("%d\n", m);
    printf("%i\n", m);
    _printf("%i\n", m);

    return (0);
}

#include "../main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int printed_chars;

    printed_chars = _printf("Unsigned decimal: %u\n", 12345);
    printf("Expected output: Unsigned decimal: 12345\n");
    printf("Characters printed: %d\n\n", printed_chars);

    printed_chars = _printf("Octal: %o\n", 12345);
    printf("Expected output: Octal: 30071\n");
    printf("Characters printed: %d\n\n", printed_chars);

    printed_chars = _printf("Hexadecimal (lowercase): %x\n", 12345);
    printf("Expected output: Hexadecimal (lowercase): 3039\n");
    printf("Characters printed: %d\n\n", printed_chars);

    printed_chars = _printf("Hexadecimal (uppercase): %X\n", 12345);
    printf("Expected output: Hexadecimal (uppercase): 3039\n");
    printf("Characters printed: %d\n\n", printed_chars);

    printed_chars = _printf("Mixed: %u, %o, %x, %X\n", 12345, 12345, 12345, 12345);
    printf("Expected output: Mixed: 12345, 30071, 3039, 3039\n");
    printf("Characters printed: %d\n", printed_chars);

    return (0);
}

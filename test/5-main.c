#include "../main.h"

int main(void)
{
    int variable = 42;
    int *ptr = &variable;
    int len_1, len_2;

    printf("-> POINTER CASES <-\n");
    printf("-------------------\n");
    
    printf("Expected output:    ");
    len_1 = printf("%p\n", ptr);
    printf("Current output:     ");
    len_2 = _printf("%p\n", ptr);

    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);

    return (0);
}

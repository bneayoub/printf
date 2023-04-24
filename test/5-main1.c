#include "../main.h"

int main(void)
{
	void *ptr1, *ptr2, *ptr3;
	int len_1, len_2;

	printf("-> POINTER CASES <-\n");
	printf("-------------------\n");

	ptr1 = &ptr1;
	len_1 = printf("Expected output:    %p\n", ptr1);
	len_2 = _printf("Current output:     %p\n", ptr1);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	ptr2 = malloc(1);
	len_1 = printf("Expected output:    %p\n", ptr2);
	len_2 = _printf("Current output:     %p\n", ptr2);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	ptr3 = NULL;
	len_1 = printf("Expected output:    %p\n", ptr3);
	len_2 = _printf("Current output:     %p\n", ptr3);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	return (0);
}

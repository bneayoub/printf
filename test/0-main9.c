#include "../main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
	int length1 = 0, length2 = 0;

	printf("\n\n");
	printf("----> CASES of Char <----\n");
	printf("----------------------\n");
	length1 = printf("Expected output:    %c\n", 67);
	length2 = _printf("Current output:     %c\n", 67);
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %cc\n", 'h');
	length2 = _printf("Current output:     %cc\n", 'h');
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %cHHH\n", 'a');
	length2 = _printf("Current output:     %cHHH\n", 'a');
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %yd\n");
	length2 = _printf("Current output:     %yd\n");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %c\n", '\0');
	length2 = _printf("Current output:     %c\n", '\0');
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %%%c\n", 'y');
	length2 = _printf("Current output:     %%%c\n", 'y');
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);

	printf("----------------------\n");
	printf("---> STRING CASES <---\n");
	printf("----------------------\n");
	length1 = printf("Expected output:    %s\n", "Ayoub is awesome");
	length2 = _printf("Current output:     %s\n", "Ayoub is awesome");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %s$\n", "");
	length2 = _printf("Current output:     %s$\n", "");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %s$\n", NULL);
	length2 = _printf("Current output:     %s$\n", NULL);
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %s\n", "Hala is low IQ");
	length2 = _printf("Current output:     %s\n", "Hala is low IQ");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %sForLife\n", "Hala's IQ growing ...");
	length2 = _printf("Current output:     %sForLife\n", "Hala's IQ growing ...");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);

	printf("----------------------\n");
	printf("-> PERCENTAGE CASES <-\n");
	printf("----------------------\n");
	length1 = printf("Expected output:    %%\n");
	length2 = _printf("Current output:     %%\n");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	length1 = printf("Expected output:    %%%%%%\n");
	length2 = _printf("Current output:     %%%%%%\n");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	printf("Expected output:    ");
	length1 = printf("%");
	printf("\n");
	printf("Current output:     ");
	length2 = _printf("%");
	printf("\n");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	printf("Expected output:    ");
	length1 = printf("%   ");
	printf("\n");
	printf("Current output:     ");
	length2 = _printf("%   ");
	printf("\n");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	printf("Expected output:    ");
	length1 = printf("test%");
	printf("\n");
	printf("Current output:     ");
	length2 = _printf("test%");
	printf("\n");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);
	printf("\n\n");
	printf("Expected output:    ");
	length1 = printf("%  s", "valid format");
	printf("\n");
	printf("Current output:     ");
	length2 = _printf("%  s", "valid format");
	printf("\n");
	printf("Expected length:    [%d]\n", length1);
	printf("Current length:     [%d]\n", length2);

	return (0);
}

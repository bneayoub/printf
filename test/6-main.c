#include "../main.h"

int main()
{
	int ours, theirs;

	ours = _printf("+%+d\n", 42);
	theirs = printf("+%+d\n", 42);
	printf("ours: %d, theirs: %d\n", ours, theirs);
	printf("ours == theirs: %s\n", ours == theirs ? "true" : "false");

	ours = _printf(" % d\n", 42);
	theirs = printf(" % d\n", 42);
	printf("ours: %d, theirs: %d\n", ours, theirs);
	printf("ours == theirs: %s\n", ours == theirs ? "true" : "false");

	ours = _printf("#%#o\n", 42);
	theirs = printf("#%#o\n", 42);
	printf("ours == theirs: %s\n", ours == theirs ? "true" : "false");

	ours = _printf("#%#x\n", 42);
	theirs = printf("#%#x\n", 42);
	printf("ours == theirs: %s\n", ours == theirs ? "true" : "false");

	ours = _printf("#%#X\n", 42);
	theirs = printf("#%#X\n", 42);
	printf("ours == theirs: %s\n", ours == theirs ? "true" : "false");

	return (0);
}

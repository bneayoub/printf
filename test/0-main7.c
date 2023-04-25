#include "../main.h"

int main(void)
{
    printf("-> MULTIPLE % WITH c & s SPECIFIERS <-\n");
    printf("-------------------\n");
    _printf("%s%c%c%s%%%s%s%c", "Loading", '.', '.', ".", "99", "Please wait", '\n');
    printf("%s%c%c%s%%%s%s%c", "Loading", '.', '.', ".", "99", "Please wait", '\n');
    return (0);
}

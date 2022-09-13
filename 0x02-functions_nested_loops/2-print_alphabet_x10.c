#include "main.h"

/**
 * print_alphabet_x10 - chec main h
 * Description: prints 10 times the alphabet
 * Result:  nothing
 */
void print_alphabet_x10(void)
{
char ab;
int j;

for (j = 0; j <= 10; j++)
{
for (ab = 'a'; ab <= 'z'; ab++)
_putchar(ab);
_putchar('\n');
}
}

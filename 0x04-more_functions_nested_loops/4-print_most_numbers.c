#include "main.h"

/**
 * print_most_numbers - prints 0-9 exceopt 2 & 4
 * Return: nothing
 */

void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n != 2 && n != 4)
_putchar(n + '0');
}
_putchar('\n');
}

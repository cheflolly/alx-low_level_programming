#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Description: prints alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char ab;
for (ab = 'a'; ab <= 'z'; ab++)
{
_putchar(ab);
}
_putchar('\n');
}

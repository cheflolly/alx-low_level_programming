#include "main.h"

/**
 * main - main block
 * Description: prints alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void);
{
char ab;
for (ab = 'a'; ab <= 'z'; ab++)
{
_putchar(ab);
}
_putchar('\n');
return (0);
}

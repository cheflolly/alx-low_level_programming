#include "main.h"

/**
 * more_numbers - 0 to 14 x10
 * Description: prints more_numbers,use _putchar 3 times
 * Return: nothing
*/

void more_numbers(void)
{
int n;
int x;

for (x = 0; x < 10; x++)
{
for (n = 0; n < 15; n++)
{
if (n > 9)
_putchar(n / 10 + '0');
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}

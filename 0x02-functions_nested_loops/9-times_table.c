#include "main.h"
/**
 * times_table - 9 times table
 * Return: value
 */
void times_table(void)
{
int x; /* factor */
int y; /* count */
int z; /* computed value */
for (x = 0; x <= 9; x++)
{
_putchar('0');
_putchar(44);
_putchar(32);
for (y = 1; y <= 9; y++)
{
z = (x * y);
if ((z / 10) > 0)
{
_putchar((z / 10) + '0');
}
else
{
_putchar(32);
}
_putchar((z % 10) + '0');

if (y < 9)
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}

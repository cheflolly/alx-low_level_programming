#include <stdio.h>
/**
 * main - main file
 * Description: print 0-9
 * Return: 0
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}

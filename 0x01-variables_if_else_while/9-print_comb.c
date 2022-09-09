#include <stdio.h>
/**
 * main - main block
 * Description: prints all possible combinations of single-digit numbers,
 * Numbers must be separated by ,(44) followed by a space (32)
 * Return: 0
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
if (n < 9)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}

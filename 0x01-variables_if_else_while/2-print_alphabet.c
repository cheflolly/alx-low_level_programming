#include <stdio.h>
/**
 * main - entry
 *
 * Description: prints alphabet in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
char ab;

for (ab = 'a'; ab <= 'z'; ab++)
{
putchar(ab);
}
putchar ('\n');
return (0);
}

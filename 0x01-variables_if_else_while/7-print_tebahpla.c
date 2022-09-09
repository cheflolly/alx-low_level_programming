#include <stdio.h>
/**
 * main - entry
 * Description: alphabets in reverse
 * Return: 0
 */
int main(void)
{
char ab;
for (ab = 'z'; ab >= 'a'; ab--)
{
putchar(ab);
}
putchar('\n');
return (0);
}

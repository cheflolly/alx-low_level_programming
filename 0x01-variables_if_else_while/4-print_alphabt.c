#include <stdio.h>
/**
 * main - main function
 * Desription: printa alphabets except q, e
 * Return: 0
 */
int main(void)
{
char ab;
for (ab = 'a'; ab <= 'z'; ab++)
{
if (ab != 'q' && ab != 'e')
putchar(ab);
}
putchar('\n');
return (0);
}

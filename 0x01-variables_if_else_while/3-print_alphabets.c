#include <stdio.h>
/**
 * main - entry point
 * Description: lowercase and uppercase printing
 * Return: 0
 */
int main(void)
{
char ab;
for (ab = 'a'; ab <= 'z'; ab++)
putchar(ab);
for (ab = 'A'; ab <= 'Z'; ab++)
putchar(ab);
putchar('\n');
return (0);
}

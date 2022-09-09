#include <stdio.h>
/**
 * main - entry
 * description: alphabets in reverse
 * return: 0
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

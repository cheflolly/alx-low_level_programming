#include <stdio.h>

/**
 * main - function
 * Description: print combination of 2 digits except some,
 * seperated by comma (44) and space (32)
 * Return: 0
 */



int main(void)
{
	int n, j, k;

	n = 0; /* n all numbers 0-99 */
	while (n < 100)
	{
		j = n % 10; /* single digits 0-9 */
		k = n / 10; /* double digits */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (n < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}

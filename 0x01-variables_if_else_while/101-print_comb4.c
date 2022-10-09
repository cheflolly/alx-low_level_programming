#include <stdio.h>

/**
 * main - function
 * Descrition: prints possible combination of 3 digits
 * Return: 0
 */

int main(void)
{
	int n, j, k, l;

	n = 0;

	while (n < 1000)
	{
		j = n / 100; /* hundreds */
		k = (n / 10) % 10; /* tens */
		l = n % 10; /* unit */

		if ((j < k) && (k < l))
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (n < 789)
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

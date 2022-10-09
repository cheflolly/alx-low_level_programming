#include <stdio.h>

/**
 * main - function
 * Description: combination
 * Return: 0
 */

int main(void)
{
	int i, j; /* double digit numbers*/
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* tens */
		b = i % 10; /* unit */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* tens */
			d = j % 10; /* unit */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (c = 0; c < i; c++)
	a[c] = s1[c];

	d = j;
	for (j = 0; j <= d; d++, j++)
	a[c] = s2[j];

	return (a);
}

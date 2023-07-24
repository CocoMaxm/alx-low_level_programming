#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, swap;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		swap = s[i];
		s[i] = *a;
		*a = swap;
		a--;
	}
}

#include "main.h"
#include <stdio.h>

/*
 * print_rev - prints a string, in reverse
 *@s: the string
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int c = 0;
	
	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_purchar(s[c]);
	}
	_putchar('\n');

	return (0);
}

#include "main.h"

/*
 * _isupper - checks for uppercase
 * @c: number to be checked
 *
 * Return: 1 = uppercase 0 = other
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}

	return (0);
}

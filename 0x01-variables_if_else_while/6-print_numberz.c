#include <stdio.h>
/**
 * main - print all single-digit numbers of base 10, starting from 0
 * Return: 0 if (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}

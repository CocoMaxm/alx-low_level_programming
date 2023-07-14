#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 * Return: always 0 (Success)
*/
int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}

	putchar('\n');

	return (0);
}

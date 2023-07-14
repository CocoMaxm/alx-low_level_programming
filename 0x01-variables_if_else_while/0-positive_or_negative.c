#include <stdio.h>
/**
 * main - it is void
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 98;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

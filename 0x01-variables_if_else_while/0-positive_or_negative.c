#include <stdio.h>
/**
 * main - it is void
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}
	else
	{
		printf("%d is negative");
	}
	return (0);
}

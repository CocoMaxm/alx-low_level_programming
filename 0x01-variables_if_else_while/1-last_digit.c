#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - prints the last number of n
 *Return: 0 is (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}

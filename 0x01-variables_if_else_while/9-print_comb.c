#include <stdio.h>
/**
 * main - printing all possible combinations of single-digits
 * Return: always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - printing all possible combinations of single-digits
 * Return: always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	for (digit <= '9'; digit++)
	{
		putchar(digit);
		putchar(",");
		putchar(" ");
	}
	putchar("\n");

	return (0);
}

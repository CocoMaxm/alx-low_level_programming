#include <stdio.h>
/**
 * main - printing hexadecimals
 * Return: always 0 (Success)
*/
int main(void)
{
	int hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar(hexa);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');

	return (0);
}

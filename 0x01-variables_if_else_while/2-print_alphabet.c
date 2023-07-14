#include <stdio.h>
/**
 * main - prints all small alphabets
 * Return: 0 is (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	/*Print a new line*/
	putchar('\n');

	return (0);
}

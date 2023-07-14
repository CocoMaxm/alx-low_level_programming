#include <stdio.h>
/**
 * main - prints small and upper case alphabets
 * Return: 0 is (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	/*print uppercase alphabets */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	/*put a new line*/
	{
		putchar('\n')
	}
	return (0);
}

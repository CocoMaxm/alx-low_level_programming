#include <stdio.h>

/**
 *main - printin alphabet except
 *Return: 0 is (success)
*/
int main(void)
{
	char letter;

	for  (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

		putchar('\n');

		return (0);
}

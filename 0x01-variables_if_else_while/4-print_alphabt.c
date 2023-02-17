#include <stdio.h>

/**
 * main - print alphabet in lowercase excluding 'q' && 'e'
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}

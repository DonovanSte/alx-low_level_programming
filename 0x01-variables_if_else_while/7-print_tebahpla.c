#include <stdio.h>

/**
 * main - print reverse lowercase alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

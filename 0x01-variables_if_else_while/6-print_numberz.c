#include <stdio.h>

/**
 * main - print form 0 - 9 followed by new line
 *
 * Return: always 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}

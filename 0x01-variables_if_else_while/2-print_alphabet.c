#include <unistd.h>
#include <stdio.h>

/**
 * main - print alphabet in lowercase followde by new line
 *
 * Can only use putchar
 * all code in main function
 * only 2 putchar's allowed
 *
 * Return: always 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

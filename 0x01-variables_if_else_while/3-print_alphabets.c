#include <unistd.h>
#include <stdio.h>

/**
 * main - print alphabet in lowercase || uppercase || new line
 *
 * only allowed to use putchar (count 3 max)
 *
 * Return: always 0
 */
int main(void)
{
	/* prints alphabet in lowercase */
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}
	/* Prints alphabet in uppercase */
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

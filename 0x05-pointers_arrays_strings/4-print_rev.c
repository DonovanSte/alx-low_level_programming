#include <stdio.h>
#include <string.h>

/**
 * print_rev - print provided string in reverse followed by a new line
 * @s: input string
 * Retunr: 0
 */
void print_rev(char *s)
{
	int leng, g;

	leng = strlen(s);

	for (g = leng - 1 ; g >= 0 ; g--)
	{
		printf("%c", s[g]);
	}

	printf("\n");
}

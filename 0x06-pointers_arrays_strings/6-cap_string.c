#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i, x;
	int cap = 32;
	int separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		 '(', ')', '{', '}'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (x = 0; x <= 13; x++)
		{
			if (n[i] == separators[x])
			{
				x = 13;
				cap = 32;
			}
		}
	}
	return (n);
}

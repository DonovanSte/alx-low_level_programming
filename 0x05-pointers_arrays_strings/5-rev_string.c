#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses the input string
 * @s: input string
 * Return: reverse string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;

	while (j < i)
	{
		char temp = s[j];

		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}

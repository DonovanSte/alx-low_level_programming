#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char input
 * Return: lengt of input string
 */
int _strlen(char *s)
{
	int i = 1, count = 0;
	char len = s[0];

	while (len != '\0')
	{
		count++;
		len = s[i++];
	}
	return(count);
}

#include "main.h"

/**
 * _strncat - concatenates 2 strings and retruns the n chars indicated
 * @dest: destination
 * @src: source
 * @n: input number of char
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, d = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[d + i] = src[i];
	}
	dest[d + i] = '\0';

	return (dest);
}

#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

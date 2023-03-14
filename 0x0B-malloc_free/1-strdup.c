#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: Null if NULL else pointer to duplicated string
 */
char *_strdup(char *str)
{
	int length = strlen(str);
	char *stringCopy = (char *)malloc(sizeof(char) * (length + 1));
	
	if (stringCopy == NULL)
		return (NULL);
	strcpy(stringCopy, str);
	return (stringCopy);
}

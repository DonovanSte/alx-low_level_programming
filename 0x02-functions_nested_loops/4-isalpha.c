#include "main.h"
#include <ctype.h>

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 *
 * Return: 1 if c is a alphabetic character, 0 if oterwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

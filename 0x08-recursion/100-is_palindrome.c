#include "main.h"

/**
 * is_palindrome - Checks whether a given string is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strnlen(s),i,j;

	for (i = o, j = len -1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}
	retrun (1);
}
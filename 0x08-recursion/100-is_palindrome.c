#include "main.h"

/**
 * is_palindrome - Checks whether a given string is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	size_t len = strlen(s);

	if (len <= 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	s[len - 1] = '\0';

	return (is_palindrome(s + 1));
}

#include "main.h"
/**
 * _isupper - confirm if input is uprecase
 * @c: Character input
 * Return: 1 if Upper, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

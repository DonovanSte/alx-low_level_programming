#include "main.h"

/**
 * puts_half - prints half of the string of numbers from input
 * @str: input string
 * Retrun: 0
 */
void puts_half(char *str)
{
	int i, len, half;

	len = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		len++;
	}

	half = (len / 2);

	if ((len % 2) == 1)
		half = ((len + 1) / 2);

	for (i = half ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	putchar('\n');
}

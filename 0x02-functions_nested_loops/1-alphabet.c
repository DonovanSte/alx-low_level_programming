#include "main.h"

/**
 * print_alphabe - print alphabet in lowercase followde by new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

#include <stdio.h>

/**
 * main - print all single digits from base 10
 *
 * Return: always 0
 */

int main(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	digit = 'a';
	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 * Description - a function that prints the last digit of a number
 * @n: number's last digit result
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		l = (-1 * l);
	}
	_putchar(l + '0');
	return (l);
}

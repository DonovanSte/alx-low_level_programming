#include "main.h"

/**
 * print_number - Function that writes an integer
 * @n: integer input
 */
void print_number(int n)
{
	if (n % 1 != 0)
	{
		return;
	}
	printf("%d", n);
}

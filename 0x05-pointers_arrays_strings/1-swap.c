#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: integer input one
 * @b: integer input two
 * Return: a,b as integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

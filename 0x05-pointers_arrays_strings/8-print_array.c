#include "main.h"

/**
 * print_array - prints indicated elements(n)
 * of array of integers followed by new line
 * @a: array
 * @n: input integer (count of integers to print)
 * Return: prints segregated array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}

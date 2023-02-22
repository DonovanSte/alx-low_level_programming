#include <stdio.h>

/**
 * main - first 50 Fibonacci numbers
 * start with 1 and 2 followed by a new line
 * Return: always 0
 */
int main(void)
{
	int i, limit = 50;
	unsigned long first = 0, second = 1, sum;

	for (i = 0 ; i < limit ; i++)
	{

		sum = first + second;
		printf("%lu", sum);
		first = second;
		second = sum;

		if (i == limit - 1)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

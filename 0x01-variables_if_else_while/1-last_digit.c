#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Calculate random input n
 *
 * if n > 5 - and is greater than 5
 * if n == 0 - and is 0
 * if n < 6 && n != 0 - and is less than 6 and not 0
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
		return (0);
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
		return (0);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("and is less than 6 and not 0\n");
		return (0);
	}
	else
		return (0);
}

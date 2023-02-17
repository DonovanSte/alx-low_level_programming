#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 *if the number is greater than 0: is positive
	 *if the number is 0: is zero
	 *if the number is less than 0: is negative
	 */
	if (n>0)
	{
		printf("%d is positive\n",n);
		return (0);
	}
	else if (n==0)
	{
		printf("%d is zero\n",n);
		return (0);
	}
	else
	{
		printf("%d is negative\n",n);
		return (0);
	}
	return (0);
}

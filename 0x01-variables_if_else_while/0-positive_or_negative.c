#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*Print random positive or negative number
*identify wheter it is a positve or negative number
*if the number is greater than 0: is positive                                                                                                                                              
*if the number is 0: is zero
*if the number is less than 0: is negative
*Return: always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; 
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	else
	{
		printf("%d is negative\n", n);
		return (0);
	}
	return (0);
}

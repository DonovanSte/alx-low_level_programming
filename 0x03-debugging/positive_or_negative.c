#include "main.h"

/**
* main - Print random positive or negative number
* identify wheter it is a positve or negative number
* if the number is greater than 0: is positive
* if the number is 0: is zero
* if the number is less than 0: is negative
* Return: always return 0
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

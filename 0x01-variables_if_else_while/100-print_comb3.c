#include <stdio.h>

/**
 * Main - Print all different combination of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int i,j;

	for(i = 0 ; i <10 ; i++)
	{
		for(j = i + 1 ; j < 10 ; j++)
		{
			if(i == 0 && j == 1)
			{
				putchar('0' + i);
				putchar('0' + j);
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar('0' + i);
				putchar('0' + j);
			}
		}
	}
	putchar('\n');
	return (0);  
}

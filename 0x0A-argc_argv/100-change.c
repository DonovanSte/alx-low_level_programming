#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that calculates the minimum number of coins required
 *        to give back a specified amount of cents.
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}


#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to a new string containing all arguments, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1; /* +1 for the newline character */
	}

	str = malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}

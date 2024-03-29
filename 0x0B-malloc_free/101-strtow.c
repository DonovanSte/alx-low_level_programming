#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		/* Skip leading spaces */
		while (str[i] == ' ')
			i++;

		/* Count word if not at the end of the string */
		if (str[i] != '\0')
			count++;

		/* Move to the next word */
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of words or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;

		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[j][k] = str[i++];
		words[j][k] = '\0';
		j++;
	}
	words[j] = NULL;
	return (words);
}

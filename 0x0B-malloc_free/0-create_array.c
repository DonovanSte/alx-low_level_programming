#include "main.h"

/**
 * create_array - Creates an array of characters and
 *                initializes it with a specific character.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails.
 *         If @size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

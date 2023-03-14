#include "main.h"

/**
 * create_array -creates an array of chars, and initializes it with a specific char
 * @size: the size of array
 * @c: the char to initialize with
 *
 * Return: pointer to array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i;

  if (size == 0)
      return (NULL);

  char *s = (char*)malloc(size * sizeof(char));

  for (i = 0; i < size; i++)
    s[i] = c;

  return (s);
}

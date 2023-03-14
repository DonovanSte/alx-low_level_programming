#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - eturns a pointer to a 2 dimensional array of integers
 * @width: with of 2D array
 * @height: heigt of 2D array
 * Return: NULL if 0 or neagtive
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *ptr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int *)malloc(width * height * sizeof(int));

	for (i = 0; i < width * height; i++)
		;

	return (ptr);
}

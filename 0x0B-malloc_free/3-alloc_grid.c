#include "main.h"

/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated grid, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		/* Invalid width or height, return NULL */
		return (NULL);
	}

	/* Allocate memory for an array of height pointers */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		/* Memory allocation failed, return NULL */
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		/* Allocate memory for each row in the grid */
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Memory allocation failed, free previously allocated memory and return NULL */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialize elements to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

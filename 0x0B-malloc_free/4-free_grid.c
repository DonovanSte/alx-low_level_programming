#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height <= 0)
	{
		/* If grid is NULL or height is invalid, return */
		return;
	}

	/* Free the memory for each row in the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the memory for the array of pointers */
	free(grid);
}

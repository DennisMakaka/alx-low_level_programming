#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array.
 * @grid: The 2D array to free.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory allocated for a 2D array.
 * It first frees each row, and then frees the array of row pointers.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

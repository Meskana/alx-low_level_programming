#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: double pointer
 * @height: integer
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

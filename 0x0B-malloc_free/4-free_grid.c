#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - That frees a 2 dimensional grid
 * @grid: the address of the 2 dimensional grid
 * @height: height of the grid
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
		free(grid[c]);
	free(grid);
}

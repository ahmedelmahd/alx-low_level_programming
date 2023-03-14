#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d array allocated previously by my create_grid func.
 * @grid: grid of the array
 * @height: height of the array
 * Return: nothing
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

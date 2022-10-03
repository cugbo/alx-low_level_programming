#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2-dimensional array of integers
 * @grid: the 2-dimensional array of integer
 * @height: the height of grid
 * Return: Success 0
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}

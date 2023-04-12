#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees heap
 * @grid: grid in memory
 * @height: height to delete
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}

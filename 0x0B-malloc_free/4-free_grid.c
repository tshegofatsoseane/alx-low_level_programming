#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d array grid
 * @height: height of grid
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

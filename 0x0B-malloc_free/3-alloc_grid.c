#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Creates a make grid using 2 dimentional array
 * @width: width
 * @height: height
 * Return: pointer to 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}


	return (grid);
}

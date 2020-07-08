#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - copy of the string given as a parameter.
 *@grid: pointer parameter.
 *@height:  poinet pointer.
 *
 **/
void free_grid(int **grid, int height)
{
	int i2;

	for (i2 = 0; i2 <= height; i2++)
	{
		free(grid[i2]);
	}
	free(grid);
}

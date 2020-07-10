#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min: unsigned int
 * @max: unsigned int
 * Return: p
 */
int *array_range(int min, int max)
{
	int *p;
	int a = 0;

	if (min > max)
		return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (!p)
		return (NULL);
	for (; a < max - min; a++)
	{
		p[a] = 0;
	}
	return (p);
}

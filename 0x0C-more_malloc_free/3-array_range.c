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
	int a, b;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	p = malloc(sizeof(*p) * a);
	if (!p)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		p[b] = min++;
	}
	return (p);
}

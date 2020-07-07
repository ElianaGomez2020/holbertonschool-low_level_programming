#include "holberton.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function
 *@size: unsigned int
 *@c: char
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (!a)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}

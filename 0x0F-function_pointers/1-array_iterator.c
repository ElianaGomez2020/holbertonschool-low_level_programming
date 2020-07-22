#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function
 * @array: pointer of the array
 * @action:  pointer function
 * @size: Size of  array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
	}
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}

}

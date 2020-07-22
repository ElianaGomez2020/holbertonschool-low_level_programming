#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - search for integer
 *@array: array of int
 *@size: array size
 *@cmp: function to apply
 *Return: -1 or int matched
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size > 0 && cmp != NULL && array != NULL)
	{

		for (a = 0; a < size; a++)
		{
			if (cmp(*array) != 0)
			{
				return (a);
			}
			array++;
		}
	}
	return (-1);

}

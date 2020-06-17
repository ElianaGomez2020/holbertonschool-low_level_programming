#include "holberton.h"
/**
 * _abs - compute absolute value of integer
 * @i: integer
 *Return: return absolute value for an integer
 */
int _abs(int i)
{
	int result = 0;

	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
	return (result);
}

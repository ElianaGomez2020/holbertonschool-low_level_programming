#include "holberton.h"

/**
 *_isdigit - checks for a digit.
 *@c: is the int
 *Return: 1 is c es a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c != 'a')
	{
		return (1);
	}
	return (0);
}

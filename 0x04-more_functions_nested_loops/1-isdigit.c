#include "holberton.h"

/**
 *_isdigit - checks for a digit.
 *@c: is the int
 *Return: 1 is c es a digit
 */
int _isdigit(int c)
{
	if (c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

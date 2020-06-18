#include "holberton.h"
/**
 *_isupper - check the character is upper
 *@c: is the value of variable
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (1);
}

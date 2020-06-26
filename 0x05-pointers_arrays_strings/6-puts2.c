#include "holberton.h"

/**
 *puts2 -  function print every other character
 *@str: is the pointer
 *Return: 0
 */
void puts2(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (a % 2 == 0)
		{
		_putchar (str[a]);
		}
	}
	_putchar('\n');
}

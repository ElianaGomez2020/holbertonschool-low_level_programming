#include "holberton.h"

/**
 *puts_half - function prints half of a string
 *@str: is the pointer
 *Return: 0
 */
void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
	}
	for ((b = (a - 1) / 2); str[b] != '\0' ; b++)
	{
		if (b > 4)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}

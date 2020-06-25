#include "holberton.h"

/**
 *print_rev -  prints a string in reverse
 *@s: is the pointer
 *Return: 0
 */
void print_rev(char *s)
{
	int _strlen(char *s);

	int a = 0;
	int i = _strlen(s);

	for (a = i; a >= 0 ; a--)
	{
		_putchar (s[a]);
	}
	_putchar ('\n');
}


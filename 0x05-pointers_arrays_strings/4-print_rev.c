#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 *print_rev -  prints a string in reverse
 *@s: is the pointer
 *Return: 0
 */
void print_rev(char *s)
{
	int a = 0;
	int i = strlen(s);

	for (a = i; a >= 0 ; a--)
	{
		_putchar (s[a]);
	}
	_putchar ('\n');
}


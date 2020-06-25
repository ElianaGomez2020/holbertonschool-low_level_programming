#include "holberton.h"

/**
 *_puts -  function write a string ch
 *@str: is the pointer
 *Return: 0
 */
void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		_putchar (str[a]);
	}
	_putchar('\n');
}

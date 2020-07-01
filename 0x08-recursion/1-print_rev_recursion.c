#include "holberton.h"

/**
 *_print_rev_recursion - is the function
 * @s: is the string
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

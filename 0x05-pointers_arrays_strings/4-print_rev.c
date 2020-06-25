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

	for (a = i - 1 ; a >= 0 ; a--)
	{
		_putchar (s[a]);
	}
	_putchar ('\n');
}

/**
 *_strlen -  function counts the number of characters in a given string
 *@s: is the pointer
 *Return: len
 */
int _strlen(char *s)
{
	int len;

	for (len = 0 ; s[len] != '\0' ; len++)
	{
	}
	return (len);
}

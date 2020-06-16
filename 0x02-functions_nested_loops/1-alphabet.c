#include "holberton.h"
/**
* print_alphabet - print alphabet
*
* Return: void
 */
void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');
}

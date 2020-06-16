#include "holberton.h"

/**
 *print_alphabet_x10 - print alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int e;
	char A;

	for (e = 0; e < 10; e++)
	{
		for (A = 'a' ; A <= 'z' ; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}
}

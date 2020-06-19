#include "holberton.h"

/**
 *print_numbers - print the numbers.
 *Return : void
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar (a);
	}
	_putchar('\n');
}

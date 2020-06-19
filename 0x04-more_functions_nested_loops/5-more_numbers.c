#include "holberton.h"

/**
 *more_numbers - print numbers
 *
 *Return: Always 0
 */
void more_numbers(void)
{
	int a, x;

	for (a = 0; a <= 9; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + 48);
			}
			_putchar(x % 10 + 48);
		}
		_putchar(10);
	}
}

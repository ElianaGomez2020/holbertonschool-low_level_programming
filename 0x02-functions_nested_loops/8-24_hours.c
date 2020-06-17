#include "holberton.h"

/**
 * jack_bauer - the function.
 *
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0 ; h < 24 ; h++)
	{
		for (min = 0 ; min < 60 ; min++)
		{
			if (min < 60)
			{
				_putchar (h / 10 + '0');
				_putchar (h % 10 + '0');
				_putchar (':');
				_putchar (min / 10 + '0');
				_putchar (min % 10 + '0');
				_putchar ('\n');
			}
		}
	}
}

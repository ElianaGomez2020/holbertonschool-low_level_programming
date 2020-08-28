#include "holberton.h"

/**
 * print_diagonal - print diagonal signal
 * @n: value to create matriz
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		putchar('\n');

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
			putchar(' ');
	putchar ('\\');
	putchar('\n');
	}
}


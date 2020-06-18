#include <stdio.h>

/**
 * main - Write a program that computes and prints the sum of
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int a = 1, b = 2, r = 0, p = 2;

	while (r < 4000000)
	{
		r = a + b;
		a = b;
		b = r;

		if (r % 2 == 0)
		{
			p = r + p;
		}
	}
	printf("%d\n", p);
	return (0);
}

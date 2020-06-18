#include <stdio.h>

/**
 * main - is the function
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	float a, b, r;

	a = 1;
	b = 2;
	r = 0;

	printf("1, 2");

	for (i = 1; i <= 96; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf(", %.0f", r);
	}
	putchar('\n');
	return (0);
}

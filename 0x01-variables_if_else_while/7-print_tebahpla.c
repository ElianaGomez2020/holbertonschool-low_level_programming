#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	int A;

	for (A = 'z'; A >= 'a' ; A--)
	{
	putchar(A);
	}
	putchar('\n');
	return (0);
}

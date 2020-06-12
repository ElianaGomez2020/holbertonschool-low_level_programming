#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}

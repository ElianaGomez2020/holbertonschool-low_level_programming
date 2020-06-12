#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	char A, B;

	for (A = 'a'; A <= 'z' ; A++)
	{
		putchar(A);
	}
	for (B = 'A'; B <= 'z' ; B++)
	putchar('\n');
	return (0);
}

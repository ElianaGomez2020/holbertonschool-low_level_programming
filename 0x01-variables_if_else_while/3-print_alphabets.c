#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	char aa, B;

	for (aa = 'a'; aa <= 'z' ; aa++)
		putchar(aa);
	for (B = 'A'; B <= 'Z' ; B++)
		putchar(B);
	putchar('\n');
	return (0);
}

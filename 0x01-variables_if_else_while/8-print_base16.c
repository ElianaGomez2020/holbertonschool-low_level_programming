#include <stdio.h>
/**
 *main - Entry block
 *@void: no argument
 *Return: 0
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a <=  9; a++)
		putchar(a % 10 + '0');
	for (b = 'a'; b <= 'f' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}

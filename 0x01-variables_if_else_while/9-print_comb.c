#include <stdio.h>
/**
 *main - Entry block
 *@void: no argument
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
		if (a != '9')
			putchar(',');
		if (a != '9')
			putchar(' ');
	}
	return (0);
}

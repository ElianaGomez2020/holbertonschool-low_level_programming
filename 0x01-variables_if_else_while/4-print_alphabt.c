#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	char aa;

	for (aa = 'a' ; aa <= 'z' ; aa++)
	{
		if (aa != 'e' && aa != 'q')
			putchar(aa);
	}
	putchar('\n');
	return (0);
}

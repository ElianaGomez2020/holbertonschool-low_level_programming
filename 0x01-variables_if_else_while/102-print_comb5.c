#include <stdio.h>
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	int j, k, l = 48, f = 48;

	for (j = 48; j <= 57; ++j)
	{
		for (k = 48; k <= 57; ++k)
		{
			for (l = j; l <= 57; ++l)
			{
				for (f = k + 1; f <= 57; ++f)
				{
					putchar(j);
					putchar(k);
					putchar(32);
					putchar(l);
					putchar(f);
					if (j != 57 || k != 56 || l != 57 || f != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	return (0);
}

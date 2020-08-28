#include<stdio.h>
/**
*main - function
*Return: 0
*/
int main(void)
{
	int i , j;

	for (i = 48; i < 57; i++)
	{
		j = i + 1;
		for (; j < 58; j++)
		{
			putchar (i);
			putchar (j);
			if (i != 56)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

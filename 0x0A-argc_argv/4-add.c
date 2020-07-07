#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - argc argv
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;
	int c;
	int res = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; argv[c] != '\0'; c++)
	{
		b = (symb(argv[c]));

		if (b == 1)
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[c]);
	}
	printf("%d\n", res);
	return (0);
}
/**
 *symb - string of ch
 *@s: char
 *Return: 0
 */
int symb(char *s)
{
	int a;

	a = 0;

	for (; s[a] != '\0'; a++)
	{
		if (isdigit(s[a]) == 0)
		{
			return (1);
		}
	}
	return (0);
}

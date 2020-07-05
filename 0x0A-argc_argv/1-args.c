#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc argv
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

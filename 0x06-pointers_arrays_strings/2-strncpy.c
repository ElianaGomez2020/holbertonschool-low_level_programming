#include "holberton.h"
/**
 *_strncpy - Copies a string
 * @dest: Destination
 * @src: Source
 * @n: number of bytes that will be copied from source.
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	for (; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}

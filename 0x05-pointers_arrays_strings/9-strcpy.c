#include "holberton.h"
/**
 *_strcpy - function copies the string
 *@dest: target variable
 *@src: is source string
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int s1;

	for (s1 = 0 ; src[s1] != '\0' ; s1++)
		dest[s1] = src[s1];
		dest[s1] = '\0';
	return (dest);
}

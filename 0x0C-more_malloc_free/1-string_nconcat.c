#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number bytes
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	p = malloc((a + (n * sizeof(*s2) + 1) * sizeof(*p)));
	if (!p)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0' && b < n; b++, a++)
	{
		p[a] = s2[b];
	}
	p[a] = '\0';
	return (p);
}

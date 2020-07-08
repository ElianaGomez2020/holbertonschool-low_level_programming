#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
	unsigned int len = 0, len1 = 0;
	char *a;

	if (!str)
		return (NULL);
	while (str[len])
	{
		len++;
	}

	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (len > 0)
	{
		*(a + len1) = *(str + len1);
		len1++;
		len--;
	}
	return (a);
}

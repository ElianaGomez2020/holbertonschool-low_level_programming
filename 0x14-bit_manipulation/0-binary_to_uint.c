#include "holberton.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to string
 *Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		return (0);

		result = result << 1;
		if (b[i] == '1')
			result = result ^ 1;
		i++;
	}
	return (result);
}

#include "holberton.h"
/**
 * get_bit - sets the value of a bit to 1 at a given index.
 *@n: number convert
 *@index: is the index
 *Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	n >>= index;
	return (n & 1);
}

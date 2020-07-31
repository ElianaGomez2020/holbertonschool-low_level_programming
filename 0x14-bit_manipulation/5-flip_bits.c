#include "holberton.h"
/**
 *int flip_bits - returns the number of bits you would need
 *@n: number convert
 *@m: is the index
 *Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int i = 0;
    unsigned int c;

    c = n ^ m;

    while (c)
    {
        i += c & 1;
        c = c >> 1;
    }
    return(i);
}

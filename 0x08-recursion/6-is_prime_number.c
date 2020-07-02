#include "holberton.h"

/**
 *is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 * Return: 1 if prime , 0 if not
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n < 2)
		return (0);
	return (divisor(n, a));
}
/**
 *divisor - prime numbers
 *@n: integer
 *@a: integer
 * Return: prime number if detected
 */
int divisor(int n, int a)
{
	if (n % a == 0)
		return (0);
	if (a > n / 2)
		return (1);
	else
		return (divisor(n, a + 1));
}

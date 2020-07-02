#include "holberton.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: is the number
 * Return: Natural square root of a number, -1 if there is no squaee root.
 */
int _sqrt_recursion(int n)
{
	int a;

	a = 0;
	return (square(n, a));
}
/**
 * square - Checks if a number is the square root of anotherone.
 * @n: is a number
 * @a: possible square
 * Return: The square
 */
int square(int n, int a)
{
	if (n == a * a)
		return (a);
	if (a * a > n)
		return (-1);
	return (square(n, a + 1));

}

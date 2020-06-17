#include "holberton.h"
/**
 *print_sign - chek sign
 *@n: string
 *Return: result
 */
int print_sign(int n)
{
	int result = 0;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	return (result);

}

#include "3-calc.h"
/**
 * op_add - add two numbers type int
 * @a: num1
 * @b: num2
 *
 * Return: add a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two numbers type int
 * @a: num1
 * @b: num2
 *
 * Return: sub a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two numbers type int
 * @a: num1
 * @b: num2
 *
 * Return: mul a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two numbers type int
 * @a: num1
 * @b: num2
 *
 * Return: div a and b.
 */
int op_div(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod two numbers type int
 * @a: num1
 * @b: num2
 *
 * Return: mod a and b.
 */
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

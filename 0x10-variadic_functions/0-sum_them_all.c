#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the arg
 * @n: number of arg
 * Return: res
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res = 0;
	va_list my_arg;

	if (n == 0)
		return (0);
	va_start(my_arg, n);
	for (i = 0; i < n; i++)
	{
		res += va_arg(my_arg, int);
	}
	va_end(my_arg);
	return (res);
}

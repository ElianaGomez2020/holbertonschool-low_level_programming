#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- print string
 * @separator: string
 * @n: number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *s;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}

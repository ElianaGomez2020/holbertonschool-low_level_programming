#include "function_pointers.h"

/**
 * print_name - function pointer to a function
 * @name: pointer
 * @f: pinter function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

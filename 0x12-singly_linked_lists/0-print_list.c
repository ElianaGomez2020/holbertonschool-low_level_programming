#include "lists.h"

/**
 *print_list - prints elements of list
 *@h: const
 *Return: num of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *aux;

	aux = h;
	for (; aux; i++)
	{
		if (aux->str != NULL)
			printf("[%u] %s\n", aux->len, aux->str);
		else
			printf("[0] (nil)\n");
		aux = aux->next;
	}
	return (i);
}

#include "lists.h"

/**
 *print_list - prints elements of list
 *@h: const
 *Return: num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h; i++)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}


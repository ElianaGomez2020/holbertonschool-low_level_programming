#include "lists.h"
/**
 * listint_len - function that prints all the elements of a list.
 * @h: first structure  *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 1;

	if (h == NULL)
		return (0);

	node += listint_len(h->next);
	return (node);
}

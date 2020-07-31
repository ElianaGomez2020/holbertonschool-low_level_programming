#include "lists.h"
/**
 *print_listint - hat prints all the elements of a listint_t list
 *@h: first structure
 *Return: node
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 1;

	if (h == NULL)
	return (0);

	printf("%d\n", h->n);
	node += print_listint(h->next);
	return (node);
}

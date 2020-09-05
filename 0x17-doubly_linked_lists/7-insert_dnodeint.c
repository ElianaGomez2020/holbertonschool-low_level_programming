#include "lists.h"
/**
 * insert_dnodeint_at_index - that inserts a new node at a given position.
 * @h: Double Pointer with the addres of head of a list
 * @idx: value of the index
 * @n: value of node
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (!h || *h == NULL)
		return (NULL);

	if (tmp == NULL || idx == 1)
		return (add_dnodeint(h, n));

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	while (idx != 0)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}
	node->n = n;
	tmp->prev->next = node;
	node->next = tmp;
	node->prev = tmp->prev;
	tmp->prev = node;
	return (node);
}

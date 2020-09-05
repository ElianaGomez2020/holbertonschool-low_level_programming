#include "lists.h"

/**
 * dlistint_len - Function that prints all the elements of a dlistint_t list
 *@h: head
 * Return: counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

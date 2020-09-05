#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * @head: double  Pointer with the addres of head of a list
 * @n: value of the n
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *cop = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next  = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (cop->next)
	{
		cop = cop->next;
	}
	cop->next = new;
	new->prev = cop;
	new->next = NULL;
	return (new);
}

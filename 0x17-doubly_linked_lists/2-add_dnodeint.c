#include "lists.h"
/**
 * add_dnodeint - Function that count all the elements of a dlistint_t list
 * @head: double  Pointer with the addres of head of a list
 * @n: value of the n
 *
 * Return: The addres of the new node of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}

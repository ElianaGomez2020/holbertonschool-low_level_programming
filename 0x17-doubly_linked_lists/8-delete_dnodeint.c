#include "lists.h"
/**
 * delete_dnodeint_at_index - that delete the node
 * @head: Double Pointer with the addres of head of a list
 * @index: is the index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		if (aux->next == NULL)
			*head = NULL;
		else
		{
			(*head)->next->prev = NULL;
			*head = aux->next;

		}
		free(aux);
		return (1);
	}
	while (i < index  && aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	if (aux == NULL)
		return (-1);
	if (aux->next == NULL)
	{
		aux->prev->next = NULL;
		free(aux);
		return (1);
	}
	aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	free(aux);
	return (1);
}

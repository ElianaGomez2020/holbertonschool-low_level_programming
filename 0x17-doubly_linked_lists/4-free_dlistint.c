#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list
 * @head: Pointer with the addres of head of a list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (aux)
	{
		aux = aux->next;
		free(head);
		head = aux;
	}
}

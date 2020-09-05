#include "lists.h"
/**
 * sum_dlistint -  that returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: Pointer with the addres of head of a list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}

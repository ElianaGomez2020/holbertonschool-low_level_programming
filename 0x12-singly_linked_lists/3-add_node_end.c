#include "lists.h"

/**
 * add_node_end - adds node to the end of a linked list
 * @head: head.
 * @str: string.
 * Return: adress of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *l_node = *head;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (l_node->next != NULL)
		{
			l_node = l_node->next;
		}
		l_node->next = new_node;
	}
	return (l_node);
}

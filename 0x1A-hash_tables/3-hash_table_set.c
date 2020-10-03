#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key:  is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_nod = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (ht)
	{
		index = key_index((unsigned char *)key, ht->size);
		temp = ht->array[index];

		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new_nod = malloc(sizeof(hash_node_t));
		if (new_nod == NULL)
			return (0);
		new_nod->key = strdup(key);
		new_nod->value = strdup(value);
		new_nod->next = ht->array[index];
		ht->array[index] = new_nod;
		return (1);
	}
	return (0);
}

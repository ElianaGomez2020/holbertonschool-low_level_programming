#include "hash_tables.h"
/**
 * hash_table_delete - ffunction that deletes a hash table.
 * @ht: is the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (temp = ht->array[i]; temp != NULL; )
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	}
	free(ht->array);
	free(ht);
}

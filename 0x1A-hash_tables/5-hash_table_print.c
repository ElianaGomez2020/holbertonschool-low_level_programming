#include "hash_tables.h"
/**
 * hash_table_print - function that retrieves a value associated with a key.
 * @ht: is the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned int index = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp != NULL; temp = temp->next)
		{
			if (index == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			index = 1;
		}
	printf("}\n");
}

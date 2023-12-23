#include "hash_tables.h"
/**
* hash_table_get - a function that retrieves a value associated with a key
* @ht: pointer to the hash table array
* @key: the key, a string that cannot be empty
* Return: the value associated with the key, or NULL if key can't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
    /* Calculate the index where the key should be stored in the hash table*/
	index = key_index((unsigned char *)key, ht->size);
    /* Check is the linked list at the calculated index is empty */
	if (ht->array[index] == NULL)
		return (NULL);
    /* Check if the key matches the key of the first node in the linked list */
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
    /* Start iterating through the linked list to find the key */
	node = ht->array[index];
	while (node != NULL)
	{
		/* Check if the corrent node's key matches the target key */
		if (strcmp(node->key, key) == 0)
			return (node->value);
		/* Move to the next node in the linked list */
		node = node->next;
	}
    /* If the key is not found in the linked list, return NULL */
	return (NULL);
}

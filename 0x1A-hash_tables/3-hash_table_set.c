#include "hash_tables.h"

/**
* create_item- creates an item (key/value) pair to the hash table
* @key: the key, a string that cannot be empty
* @value: the value associated with the key, can be an empty string
* Return: pointer to the new item created
*/
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
	{
		return (0);
	}
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (0);
	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
		return (0);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}
/**
* set_pair_without_collision - sets a key/value pair without handling collision
*                          set key:value to first array element
* @ht: pointer to the hash table
* @key: the key, a string that cannot be empty
* @value: the value associated with the key, can be an empty strin
* @index: the key's index
* Return: the node, or NULL if failed
*/
int set_pair_without_collision(hash_table_t *ht, const char *key,
	const char *value, unsigned long int index)
{
	hash_node_t *node = create_item(key, value);

	if (node == NULL)
		return (0);
	node->next = NULL;
	ht->array[index] = node;
	return (1);
}
/**
* hash_table_set - a function that adds an element to the hash table
* @ht: hash table to add or update
* @key: Key for the value
* @value: Value associated with the key
* Return: On success (1) or (0) if otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (set_pair_without_collision(ht, key, value, index));
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);
			free(node->value);
			node->value = malloc(strlen(value) + 1);
			if (node->value == NULL)
				return (0);
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		node = create_item(key, value);
		if (node == NULL)
		return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (0);
}

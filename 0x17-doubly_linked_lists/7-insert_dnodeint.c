#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 *		a new node at a given position
 * @h: A pointer to the pointer of the head
 * @idx: Index at which the new node should be inserted
 * @n: Data of the new node
 *
 * Return: The address of the new node or NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *temp_node = NULL;
	dlistint_t *new_node = NULL;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	temp_node = current_node->next;
	current_node->next = new_node;
	if (temp_node != NULL)
	{
		temp_node->prev = new_node;
	}
	new_node->prev = current_node;
	new_node->next = temp_node;
	return (new_node);
}

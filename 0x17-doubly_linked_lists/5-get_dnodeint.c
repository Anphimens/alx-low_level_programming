#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: Head of linked lis
 * @index: The index of the node, starting from 0
 *
 * Return: The nth node or NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node = head;
	unsigned int i = 0;

	while (i < index && curr_node != NULL)
	{
		curr_node = curr_node->next;
		i++;
	}
	return (curr_node);
}

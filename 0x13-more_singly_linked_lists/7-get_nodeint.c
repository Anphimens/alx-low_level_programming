#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *			of a linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node, starting at 0
 *
 * Return: pointer to the nth node of the linked list
 *		or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	return (current);
}

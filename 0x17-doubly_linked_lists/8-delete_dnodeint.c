#include "lists.h"

/**
 * delete_dnodeint_at_index - a fuction that deletes a node
 *		at a given index
 * @head: a pointer to the pointer pointing to the head of the list
 * @index: Index at which node should be deleted
 *
 * Return: Return 1 on success or -1 if fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node;
	dlistint_t *current_node = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}
	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;
	if (current_node == NULL) /* Index out of bounds */
		return (-1);

	temp_node = current_node->prev;
	temp_node->next = current_node->next;

	if (current_node->next != NULL) /* Check if next node exist */
		current_node->next->prev = temp_node;

	free(current_node);
	return (1);
}

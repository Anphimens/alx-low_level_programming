#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function the adds a new node at the end
 *			of a linked list
 * @head: A pointer to the pointer of the head of the list
 * @n: integer value of end node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp_node;

	if (head == NULL)
		return (NULL);

	temp_node = malloc(sizeof(*temp_node));
	if (temp_node == NULL)
		return (NULL);

	temp_node->n = n;
	temp_node->next = NULL;
	end_node = *head;
	if (*head == NULL)
	{
		*head = temp_node;
		return (temp_node);
	}
	while (end_node->next != NULL)
		end_node = end_node->next;
	end_node->next = temp_node;

	return (temp_node);
}

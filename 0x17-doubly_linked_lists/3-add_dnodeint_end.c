#include "lists.h"

/**
 * add_dnodeint_end - a function that adds the a new node
 *			at the end of a dlistint_t list
 * @head: A pointer to the pointer of the head of the list
 * @n: integer value of end node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *temp_node;

	if (head == NULL)
		return (NULL);

	end_node = malloc(sizeof(*end_node));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;
	temp_node = *head;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (temp_node->next != NULL)
		temp_node = temp_node->next;
	temp_node->next = end_node;
	end_node->prev = temp_node;

	return (end_node);
}

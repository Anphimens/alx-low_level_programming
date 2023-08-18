#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a		list
 * @head: A pointer to the pointer of the head of the linked list
 * @n: integer value of new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head to point to the new node */
	*head = new_node;
	return (new_node);
}

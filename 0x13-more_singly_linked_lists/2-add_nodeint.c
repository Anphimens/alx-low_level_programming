#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning
 *		of an integer linked list.
 * @head: A pointer to the pointer of the head of the linked list
 * @n: integer value of new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;
	return (new_node);
}

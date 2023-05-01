#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head node of the linked list
 * @n: integer value to be stored in the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;


	/* check if the head pointer is NULL, no to list to insert to */
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to head of list
 * @idx: index of the list where the new node should be added.
 *	Index starts at 0
 * @n: integer value to be stored in the new node
 *
 * Description: If is is not possible to add the new node at index,
 *		do not add the new node and return NULL
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Declare variables */
	listint_t *new_node, *current_node;
	unsigned int i;

	/* check if the head pointer is NULL, no to list to insert to */
	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current_node = *head;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	/**
	 * if current node is NULL, it means we have reached the end
	 * of the list before finding the node at index idx - 1
	 * which means we can not insert the new node at the index
	 * in this case, free the new nodex
	 */
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* otherwise insert the new node between the node at indx -1 and idx */
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

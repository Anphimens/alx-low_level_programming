#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that addds a new node at the end of a list
 * @head: a pointer to the head of the list
 * @str: string to duplicate
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp_node;

	if (head == NULL || str == NULL)
		return (NULL);

	temp_node = malloc(sizeof(*temp_node));
	if (temp_node == NULL)
		return (NULL);

	temp_node->str = strdup(str);
	if (temp_node->str == NULL)
	{
		free(temp_node);
		return (NULL);
	}

	temp_node->len = strlen(str);
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

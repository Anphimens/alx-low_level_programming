#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that add a new node to the beginning of a list
 * @head: pointer that pointes to the address of the new node
 * @str: string to duplicate into new node
 * Return: Str or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

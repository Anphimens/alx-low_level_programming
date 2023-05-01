#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to head of linked list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL || *head == NULL)
		return;
	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}

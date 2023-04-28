#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list
 * @head: pointer to head of list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

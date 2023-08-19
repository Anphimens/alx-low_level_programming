#include "lists.h"

/**
 * free_dlistint - a function that frees linked listi
 * @head: Beginning of linked list
 *
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

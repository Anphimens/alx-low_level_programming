#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 *                  the data(n) of linked list
 * @head: Head of linked list
 *
 * Return: The sum of the linked list data(n)
 *          or zero (0) if empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = head;
	int sum = 0;

	while (curr_node != NULL)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}
	return (sum);
}

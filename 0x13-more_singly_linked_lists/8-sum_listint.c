#include "lists.h"

/**
 * sum_listint - Calculate the sum of all data(n) of a list
 * @head: Pointer to the head of the list
 *
 * Return: the sum of all data or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of
 *			a list of integers
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
			printf("Error\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

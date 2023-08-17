#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a list
 * @h: struct that contain element to print
 *
 * Return: Return number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
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

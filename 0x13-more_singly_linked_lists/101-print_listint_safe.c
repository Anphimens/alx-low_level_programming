#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the beginning of the list
 *
 * Description: The names steady and quick are used to reflect the
 *		relative speeds of the two pointers. The slow pointer
 *		moves slowly and steadily, while the fast pointer moves
 *		quickly and covers more ground,
 *		as used in a loop in a linked list.
 *
 * Return: the number of nodes in the list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *steady = head, *quick = head;

	while (quick && quick->next)
	{
		printf("[%p] %d\n", (void *)head, steady->n);
		count++;
		steady = steady->next;
		quick = quick->next->next;
		if (steady == quick)
		{
			printf("[%p] %d\n", (void *)head, steady->n);
			count++;
			steady = head;
			while (steady != quick)
			{
				printf("[%p] %d\n", (void *)head, steady->n);
				count++;
				steady = steady->next;
				quick = quick->next;
			}
			printf("[%p] %d\n", (void *)head, steady->n);
			count++;
			printf("->[%p] %d\n", (void *)head, steady->n);
			exit(98);
		}
	}
	if (steady)
	{
		printf("[%p] %d\n", (void *)head, steady->n);
		count++;
		steady = steady->next;
	}
	while (steady)
	{
		printf("[%p] %d\n", (void *)head, steady->n);
		count++;
		steady = steady->next;
	}
	return (count);
}

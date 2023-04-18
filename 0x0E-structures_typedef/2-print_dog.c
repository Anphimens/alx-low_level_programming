#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A function that prints a struct dog
 * @d: a pointer to the elements in struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)"));
		d-> age ? (printf("Age: %f\n", d->age)) : (printf("Age: (nil)"));
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)"));
	}
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that free dogs
 * @d: pointer to dog to be free
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

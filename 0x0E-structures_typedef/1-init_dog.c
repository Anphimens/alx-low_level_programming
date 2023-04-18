#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initialize a variable
 *			of type struct dog
 * @d: Address of struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

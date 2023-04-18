#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char _strlen(char *s);
char *_strcpy(char *dest, char *s);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - a function the gets the length of a str
 * @s: argument to find length
 * Return: 0
 */
char _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _strcpy - a function that copies a string to @dest
 * @dest: where to copy string to
 * @s: string to copy
 * Return: 0
 */
char *_strcpy(char *dest, char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		dest[a] = s[a];
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - a function that create a new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: a pointer to newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}

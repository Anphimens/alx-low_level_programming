#include "main.h"

/**
 * _strcpy - a function that copies a string
 * @dest: parameter for argument
 * @src: parameter for argument
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

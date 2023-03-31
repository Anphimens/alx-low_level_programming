#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenate two strings
 * @dest: destination of string
 * @src: source of string
 * @n: specified number of characters
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int i;

	for (d = 0; dest[d] != '\0'; d++)
	{
		continue;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[d + i] = src[i];
	}
	dest[d + i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination for string
 * @src: source of string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest; /* set pointer to end of destination */

	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

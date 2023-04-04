#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: string for argument
 * @c: character to be located
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
		return (s);
	return (NULL);
}

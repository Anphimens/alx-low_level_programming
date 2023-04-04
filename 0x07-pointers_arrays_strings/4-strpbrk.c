#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any of a set
 * of bytes
 * @s: string for argument
 * @accept: string for argument
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*ptr == *s)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}

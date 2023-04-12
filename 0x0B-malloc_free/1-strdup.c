#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - a function that returns a pointer to a newly
 *	allocated space in memory
 * @str: parameter, string to copy
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new, *p;
	int i = 0;

	while (str[i])
		i++;
	new = malloc(i + 1);
	p = new;
	if (new == NULL)
		return (NULL);
	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (new);
	return (0);
}

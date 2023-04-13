#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 *  of a program
 *  @ac: first parameter as argument count
 *  @av: second parameter as argument vector
 *  Return: NULL
 */
char *argstostr(int ac, char **av)
{
	char *s, *new_s;
	int i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;
	s = malloc(len * sizeof(char));
	new_s = s;

	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*s = av[i][j];
			s++;
		}
		*s = '\n';
		s++;
	}
	return (new_s);
}

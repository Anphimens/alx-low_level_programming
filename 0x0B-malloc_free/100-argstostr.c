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
	char *s;
	int i, j;
	int new_s, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;
	s = malloc(len * sizeof(char));
	new_s = 0;

	if (s == 0)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			s[new_s++] = av[i][j];
		s[new_s++] = '\n';
	}
	s[new_s] = '\0';
	return (s);
}

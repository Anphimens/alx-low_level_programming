#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string to concatenate
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, size;
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = s1_length + s2_length;
	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < s2_length; i++)
		s[s1_length + i] = s2[i];
	s[size - 1] = '\0';
	return (s);
}

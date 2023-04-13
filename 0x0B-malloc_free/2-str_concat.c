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
	int s1_length;
	int s2_length;
	char *s = NULL;

	size = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	s = (char *)malloc((s1_length + s2_length + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (; s2[size] != '\0'; i++)
	{
		s[i] = s2[size];
		size++;
	}
	return (s);
}

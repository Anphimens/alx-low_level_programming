#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenate a string
 * @s1: first string
 * @s2: second string
 * @n: the number of @s2 to concat with
 * Return: a pointer to newly allocated space with string(s)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	int i, j;
	int num = n;
	int s1_len;
	int s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	if (num >= s2_len)
	{
		num = s2_len;
		newstr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	}
	else
	{
		newstr = malloc(sizeof(char) * (s1_len + n + 1));
	}
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		newstr[i++] = s2[j];
	}
	newstr[i++] = '\0';
	return (newstr);
}

#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: parameter for argument
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char swap; /* a temporal variable to swap characters in the string */
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = swap;
	}
}

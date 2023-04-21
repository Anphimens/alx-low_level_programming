#include "main.h"
#include <stdlib.h>

int word_length(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_length - locates the index that the end of the first word
 * in a string
 *
 * @str: string for argument
 *
 * Return: The index marking the end if tge ubutuak word
 */
int word_length(char *str)
{
	int i = 0;
	int len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words - counts the number of words contained in a string
 * @str: The string to be searched
 * Return: The number of words contained within a str
 */
int count_words(char *str)
{
	int i;
	int w = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += word_length(str + i);
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: the string to be split
 *
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **s;
	int i = 0;
	int words, m, term, n;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);

	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));

	for (m = 0; m < words; m++)
	{
		while (str[i] == ' ')
			i++;
		term =  word_length(str + i);

		s[m] = malloc(sizeof(char) * (term + 1));

		if (s[m] == NULL)
		{
			for (; m > 0; m--)
				free(s[m]);
			free(s);
			return (NULL);
		}
		for (n = 0; n < term; n++)
			s[m][n] = str[i++];
		s[m][n] = '\0';
	}
	s[m] = NULL;
	return (s);
}

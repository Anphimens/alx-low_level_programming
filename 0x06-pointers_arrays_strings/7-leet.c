#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @st-Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337: parameter for argument
 * Return: string
 */
char *leet(char *str)
{
	int i, j;
	char lc[] = "aAEeoOtTlL"; /* leet characters */
	char lr[] = "4433007711"; /* replacement */

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; lc[j] != '\0'; j++)
		{
			if (str[i] == lc[j])
				str[i] = lr[j];
		}
	}
	return (str);
}

#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: parameter for argument
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

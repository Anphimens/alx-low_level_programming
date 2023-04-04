#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - a function to capitalize all words of a string
 * @str: parameter for argument
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;
	char a[] = " \t\n,;.!?\"(){}";
	int j;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}

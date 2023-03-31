#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - a function that changes all lowercase letters to uppercase
 * @str: string for argument
 * Return: Nothing
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

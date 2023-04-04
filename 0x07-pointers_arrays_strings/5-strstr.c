#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: larger string for argument
 * @needle: substring to locate
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr1, *ptr2;

	while (*haystack)
	{
		ptr1 = haystack;
		ptr2 = needle;
		while (*ptr1 && *ptr2 && (*ptr1 == *ptr2))
		{
			ptr1++;
			ptr2++;
		}
		if (!*ptr2)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

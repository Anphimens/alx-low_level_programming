#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string for argument
 * @accept: string for argument
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	unsigned int slen = strlen(s);
	unsigned int accept_len = strlen(accept);

	for (a = 0; a < slen; a++)
	{
		for (b = 0; b < accept_len; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (b == accept_len)
		{
			return (a);
		}
	}
	return (slen);
}

#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination for memory
 * @src: source of the memory to be copied
 * @n: number of bytes to be copied
 * Return: dest (pointer)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pofdest = dest;
	char *pofsrc = src;

	while (n-- > 0)
	{
		*pofdest++ = *pofsrc++;
	}
	return (dest);
}

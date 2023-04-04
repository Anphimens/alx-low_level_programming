#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte
 * @s: s pointer to memory area to be filled
 * @b: the constant byte to fill the memory
 * @n: the number of bytes to fill
 * Return: s (pointer)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}

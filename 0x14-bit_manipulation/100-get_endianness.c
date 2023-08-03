#include "main.h"

/**
 * get_endianness - a function that checks for endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0x75643210;
	char *c = (char *) &x;

	return (*c == 0x10);
}

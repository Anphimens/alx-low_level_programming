#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 *	would need to flip to get from one number to another.
 * @n: first parameter
 * @m: second parameter
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int i;
	unsigned long int mask;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		mask = 1UL << i;
		if ((n & mask) != (m & mask))
		{
			count++;
		}
	}
	return (count);
}

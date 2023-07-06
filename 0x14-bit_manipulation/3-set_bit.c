#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: number passed as argument
 * @index: index to set value
 *
 * Return: 1 for success for -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}

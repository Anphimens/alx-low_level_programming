#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number passed as argument
 * @index: index to set value
 *
 * Return: 1 for success or -1 for faile
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}

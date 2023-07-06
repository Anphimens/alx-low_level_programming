#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number passed as argument
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int print_bit = 0;
	int i;
	unsigned long int mask;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
		{
			print_bit = 1;
			_putchar('1');
		}
		else if (print_bit)
		{
			_putchar('0');
		}
	}
	if (!print_bit)
	{
		_putchar('0');
	}
}

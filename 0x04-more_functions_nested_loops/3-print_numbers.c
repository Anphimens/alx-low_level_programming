#include "main.h"

/**
 * print_numbers - A function that prints numbers from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}

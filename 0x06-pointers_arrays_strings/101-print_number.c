#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: parameter for argument
 * Return: 0
 */
void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	y = n;

	if (y / 10)
		print_number(y / 10);

	_putchar(y % 10 + '0');
}

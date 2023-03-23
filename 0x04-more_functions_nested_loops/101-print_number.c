#include "main.h"

/**
 * print_number -  a function that prints an integer.
 * @n: is the parameter for argument
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

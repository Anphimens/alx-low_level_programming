#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: is the int for the case
 * Return: 1 if positive
 * 0 if zero
 * Or -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

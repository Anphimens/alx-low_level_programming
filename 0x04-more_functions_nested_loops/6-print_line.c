#include "main.h"

/**
 * print_line - a function that draws a straight in a terminal
 * @n: the parameter to use
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

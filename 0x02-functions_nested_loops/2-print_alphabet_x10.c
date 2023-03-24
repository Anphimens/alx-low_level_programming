#include "main.h"

/**
 * print_alphabet_x10 - a fuction that prints 10times the alphabet
 * in lowercase, followed by a new line.
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

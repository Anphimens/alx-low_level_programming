#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints
 * a string in reverse
 * @s: parameter for argument
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
		_print_rev_recursion(&s[1]);
	printf("%c", s[0]);
}

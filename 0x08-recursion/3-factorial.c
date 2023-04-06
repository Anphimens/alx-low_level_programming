#include "main.h"

/**
 *  factorial - a function that returns factorial
 *		of a given number
 *  @n: integer for argument
 *  Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 *	square root of a number
 * @n: integer for argument
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (find_my_square(1, n));
}

/**
 * find_my_square - a function that calculate for
 *		the root square  of an int
 * @n: parameter to find square root
 * @num: parameter for argument
 * Return: 0
 */
int find_my_square(int n, int num)
{
	if (n * n == num)
	{
		return (n);
	}
	else if (n * n > num)
		return (-1);
	return (find_my_square(n + 1, num));
}

#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the
 *		input integer is prime
 * @n: integer for argument
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (is_prime_finder(n, 2));
}


/**
 * is_prime_finder - a function that finds the value of prime
 * @n: integer for argument
 * @i: integer to iterate through n
 * Return: 0
 */
int is_prime_finder(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	return (is_prime_finder(n, i + 1));
}

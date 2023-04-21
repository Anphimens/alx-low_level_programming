#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: named parameter
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum_them = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum_them += va_arg(nums, int);
	}
	va_end(nums);
	return (sum_them);
}

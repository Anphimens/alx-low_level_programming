#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 throught 9)
 * @c: character for the check
 * Return: 1 (Success)
 * Otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

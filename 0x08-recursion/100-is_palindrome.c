#include "main.h"
#include <string.h>
/**
 * is_palindrome - a function that returns 1 if a string
 *		is a palindrome
 * @s: string for argument
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0' || *s == ' ')
		return (1);
	return (find_my_palindrome(s, 0, strlen(s) - 1));
}

/**
 * find_my_palindrome - a function that finds similar strings
 * @s: string for argument
 * @firstIndex: parameter to check character in string
 * @lastIndex: parameter to check character in string
 * Return: 0
 */
int find_my_palindrome(char *s, int firstIndex, int lastIndex)
{
	if (firstIndex >= lastIndex)
	{
		return (1);
	}
	if (s[firstIndex] != s[lastIndex])
	{
		return (0);
	}
	return (find_my_palindrome(s, firstIndex + 1, lastIndex - 1));
}

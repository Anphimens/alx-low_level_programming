#include "main.h"

/**
 * set_string - a function that sets the value of a
 * pointer to char
 * @s: double pointer variable
 * @to: parameter to set value to
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

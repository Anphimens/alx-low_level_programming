#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct function to perform the
 *		operatin asked by the user
 * @s: the operator passed as argument
 * Return: a pointer to the function that matches with the operator given
 *		given as argument
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

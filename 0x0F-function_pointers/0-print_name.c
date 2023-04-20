#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: First parameter as name to print
 * @f: second parameter as function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

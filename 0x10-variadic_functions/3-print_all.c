#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - a function that prints an integer
 * @arg: argument variable
 * Return: Nothing
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}


/**
 * print_char - a function that prints a character
 * @arg: argument variable
 * Return: Nothing
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}


/**
 * print_float - a function that prints a float
 * @arg: argument variable
 * Return: Nothing
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}


/**
 * print_string - a function that prints a string
 * @arg: argument variable
 * Return: Nothing
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	print_funcs types[] = {
		{"i", print_int},
		{"c", print_char},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list arg;
	int i, count = 0;
	char *s = "";

	va_start(arg, format);

	while (format && format[i])
	{
		while (types[count].type)
		{
			if (*(types[count].type) == format[i])
			{
				printf("%s", s);
				types[count].f(arg);
				s = ", ";
			}
			count++;
		}
		count = 0;
		i++;
	}
	printf("\n");
	va_end(arg);
	return;
}

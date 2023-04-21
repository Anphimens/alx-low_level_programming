#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
  * print_func - a structure that stores a print function
  * @type: format specifier 58  * @f: print function
  * Return: Nothing
  */
typedef struct print_funcs
{
	char *type;
	void (*f)(va_list arg);
} print_funcs;

#endif /* VARIADIC_FUNCTIONS_H */

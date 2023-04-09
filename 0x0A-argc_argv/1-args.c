#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the number
 * of argument passed into it
 * @argc: first parameter for argument
 * @argv: second parameter for argument
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}

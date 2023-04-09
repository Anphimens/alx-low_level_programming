#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints that prints its name
 * @argc: first parameter of argument
 * @argv: second parameter for argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		printf("%s\n", *argv);

	}
	return (0);
}

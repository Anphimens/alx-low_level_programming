#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that multiplies two numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result = 1;
	int i;

	if (argc != 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

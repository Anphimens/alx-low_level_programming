#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			while (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

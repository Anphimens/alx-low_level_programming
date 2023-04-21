#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * is_positive_num- a function that find positive numbers
 * @num: number passed for argument
 *
 * Return: 1
 */
int is_positive_num(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 * mul - a function to multiply two int
 * @num1: first int
 * @num2: second int
 *
 * Return: 0
 */
int mul(char *num1, char *num2)
{
	int n1 = atoi(num1);
	int n2 = atoi(num2);

	return (n1 * n2);
}

/**
 * main - Entry point to function
 * @argc: number of argument
 * @argv: argument variable
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result;
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];

	if (!is_positive_num(num1) || !is_positive_num(num2))
	{
		printf("Error\n");
		return (98);
	}
	result = mul(num1, num2);
	printf("%d\n", result);
	return (0);
}

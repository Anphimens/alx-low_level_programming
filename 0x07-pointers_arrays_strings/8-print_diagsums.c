#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: parameter for square matrix
 * @size: size of parameter
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if (i == size - j - 1)
			{
				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

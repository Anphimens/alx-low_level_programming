#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 for fail
 */
int main(int argc, char **argv)
{
	int i;
	int cents = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(*(argv + 1));
	if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; ++i)
		{
			if (money / coins[i])
			{
				cents += money / coins[i];
			}
			if (money % coins[i])
			{
				money %= coins[i];
			}
			if (!(money % coins[i]))
				break;
		}
		printf("%d\n", cents);
	}
	return (0);
}

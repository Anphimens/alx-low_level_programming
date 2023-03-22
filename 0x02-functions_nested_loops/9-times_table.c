#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 * starting with 0
 * Return: 0
 */
void times_table(void)
{
	int a = 0;
	int b;
	int r;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			r = a * b;
			if (b == 0)
			{
				_putchar('0' + r);
			}
			else if (r < 10)
			{
				_putchar(' ');
				_putchar('0' + r);
			}
			else
			{
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

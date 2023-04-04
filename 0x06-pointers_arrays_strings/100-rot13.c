#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @str: parameter for argument
 * Return: string
 */
char *rot13(char *str)
{
	int i, o;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i); i++)
	{
		for (o = 0; o < 52; o++)
		{
			if (input[o] == *(str + i))
			{
				*(str + i) = output[o];
				break;
			}
		}
	}
	return (str);
}

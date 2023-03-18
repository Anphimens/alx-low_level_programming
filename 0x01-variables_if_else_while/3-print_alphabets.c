#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * and then in uppercase, followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	return (0);
}

#include <stdio.h>

/**
 * beforeMain - a function that prints a string before
 *		execution of main function
 * Description: This function is annotated with the GCC
 *		constructor attribute, which specifies that
 *		the function is to be executed before the main
 *		function
 * Return: Nothing
 */
void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include <stdio.h>
/**
 * alphabet - Prints the lowercase English alphabet to the console
 *
 * @i: Unused parameter (required by function signature)
 *
 * Return: Always 0
 */

int alphabet(char i)
{
	/* Loop through the lowercase letters of the alphabet from 'a' to 'z' */
	for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
	putchar('\n');
	return (0);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Call the alphabet function to print the lowercase English alphabet */
	print_alphabet('a');
	return (0);
}

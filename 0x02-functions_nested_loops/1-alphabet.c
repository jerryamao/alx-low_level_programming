#include "main.h"
/**
 * alphabet - Prints the lowercase English alphabet to the console
 *
 * @i: Unused parameter (required by function signature)
 *
 * Return: Always 0
 */

int print_alphabet(void)
{
	/* Loop through the lowercase letters of the alphabet from 'a' to 'z' */
	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}

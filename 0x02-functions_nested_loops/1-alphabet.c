#include "main.h"
/**
 * print_alphabet - Prints the lowercase English alphabet to the console
 *
 *
 * Return: Always 0
 */

print_alphabet(void)
{
	/* Loop through the lowercase letters of the alphabet from 'a' to 'z' */
	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}

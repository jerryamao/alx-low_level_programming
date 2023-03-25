#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: input variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0 ; i < n ; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}

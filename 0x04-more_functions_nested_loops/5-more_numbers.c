#include "main.h"

/**
 * more_numbers - prints 10 times the number
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 10 ; j++)
		{
			if (j >= 10)
				_putchar('i');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
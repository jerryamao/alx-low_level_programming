#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: the character
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

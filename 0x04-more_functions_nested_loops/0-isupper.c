#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: the charcter to be checked
 * Return: 1 if uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

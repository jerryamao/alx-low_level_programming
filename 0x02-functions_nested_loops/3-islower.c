#include "main.h"
/**
 * int _islower - checks the lowwercase character
 * c - character
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

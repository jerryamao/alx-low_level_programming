#include "main.h"
/**
 * is_alpha - checks the character is an alphabet
 * @c: the character to be checked
 * Return: Always 0
 */

int is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

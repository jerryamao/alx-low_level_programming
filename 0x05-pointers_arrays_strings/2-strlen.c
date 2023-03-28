#include <stdio.h>
#include "main.h"

/**
 * _strelen - function that returns the length of a string
 * @s: parameter
 * @str: function parameter
 * Return: lenth
 */

int _strlen(char *s)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
    return length;
}

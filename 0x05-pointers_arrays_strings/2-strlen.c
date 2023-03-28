#include <stdio.h>
#include "main.h"

/**
 * _strelen - function that returns the length of a string
 * @s: string whose length to be printed
 * Return: count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
    return (count);
}

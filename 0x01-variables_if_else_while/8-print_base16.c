#include <stdio>
/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n')
	return (0);
}
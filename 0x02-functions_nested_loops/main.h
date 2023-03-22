#include <stdio.h>
#include <unistd.h>

int print_alphabet(void)
{
	char i;
         /* Loop through the lowercase letters of the alphabet from 'a' to 'z' */
	for (i = 'a' ; i <= 'z' ; i++)
		 putchar(i);
         putchar('\n');
	 return (0);
}

#include <stdio.h>
#include <unistd.h>

0 int print_alphabet(char i)
{
         /* Loop through the lowercase letters of the alphabet from 'a' to 'z' */
	for (i = 'a' ; i <= 'z' ; i++)
		 putchar(i);
         putchar('\n');
	 return (0);
 }

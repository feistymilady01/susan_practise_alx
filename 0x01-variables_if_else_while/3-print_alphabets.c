#include <stdio.h>

/**
 * main: using putchar function
 * @A-Z and 
 * @a-z
 * return: Success(0)
 */
int main ()
{
	char big;
	char small;
	
	for (big = 'A'; big <= 'Z'; big++)
	{
		putchar(big);
	}
	for (small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}
	putchar('\n');
	return (0);
}

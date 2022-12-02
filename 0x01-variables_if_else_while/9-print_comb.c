#include <stdio.h>
/**
 * main: using putchar print out 0-9 
 * @using , and space to seperate the digits
 * @hope it goes well
 * return: Success(0)
 */
int main (void)
{
	int n=0;
	
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	return (0);
}

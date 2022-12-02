#include <stdio.h>

/**
 * main: reverse alphabet 
 * @z-a
 * in char 'z' - 'a'
 * return: Success (0)
 */

int main()
{
	char alp;

	for (alp = 'z';  alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}

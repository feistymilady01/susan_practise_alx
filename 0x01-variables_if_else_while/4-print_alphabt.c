#include <stdio.h>

/**
 * main: using putchar function 
 * @except e and q
 * @if conditional statement
 * return: Success (0)
 */
int main()
{
	char alp;
	 for (alp = 'a'; alp <= 'z'; alp++)
	 {
		 if (alp != 'e' && alp != 'q')
		 {
			 putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}

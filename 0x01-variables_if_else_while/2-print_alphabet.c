#include <stdio.h>
/**
 * main: USING putchar function
 * @a-z
 * dont use printf
 */
int main()
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}

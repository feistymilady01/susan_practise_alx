#include <stdio.h>
/**
 * main:Hexadecimal numbers
 * @0123456789abcde
 * you can do it
 * return: Success(0)
 */
int main()
{
	char num;
	char alp;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alp ='a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}

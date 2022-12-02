#include <stdio.h>
/**
 * main:print base 10
 * *@without using data type char
 * @it has to take an arg void and 
 * @data type int 
 * return: Success (0)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
}

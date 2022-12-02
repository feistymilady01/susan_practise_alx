#include "main.h"

int print_last_digit(int n)
{
	if (n=10;n<5000;n++)
	{
		if (n!=0 || n!=9)
		{
			_putchar(n);
		}
	}
	return (0);
}


int main(void)
{
	int r;


	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

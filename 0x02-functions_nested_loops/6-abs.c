#include "main.h"
#include <stdio.h>

int _abs(int x)
{
	if (x>=0)
	{
		_putchar(x);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	int r;


	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

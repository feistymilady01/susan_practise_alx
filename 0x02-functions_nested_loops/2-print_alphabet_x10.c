#include "main.h"

void print_alphabet_x10(void)
{
	char c;
	char i;

	for (i=0;i<=10;i++)
	{
		for (c='a';c<='z';c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}

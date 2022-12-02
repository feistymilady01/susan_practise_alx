#include <stdio.h>

void _puts_recursion(char *s);

int main(void)
{
	_puts_recursion("put with recursion");
	return (0);
}

void _puts_recursion(char *s)
{
	if (*s =! "\0")
	{
		putchar(*s);
		putchar(s + 1);
		putchar("\n");
	}
}

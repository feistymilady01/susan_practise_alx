#include "main.h"

int _isalpha(int c)
{
	if (c=='a' || c=='A' && c<='z' || c<='Z')
		return (1);
	else
		return (0);
}

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	 _putchar(r + '0');
	 r = _isalpha(';');
	  _putchar(r + '0');
	  _putchar('\n');
	  return (0);
}

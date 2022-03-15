#include "main.h"

void print_alphabet(void)
{
	char x;
	x = 97;
	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

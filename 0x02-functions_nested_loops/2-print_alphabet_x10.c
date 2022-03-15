#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case 10 times
 */
void print_alphabet_x10(void)
{
	char val;
	int line;

	val = 97;
	while (val < 122)
	{
		_putchar(val);
		val++;
		line = 0;
		while (line < 11)
		{
			_putchar('\n');
			line++;
		}
	}
}

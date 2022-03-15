#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case 10 times
 */
void print_alphabet_x10(void)
{
	char val;
	int line;

	line = 0;
	while (line < 11)
	{
		val = 97;
		while (val <= 122)
		{
			_putchar(val);
			val++;
		}
		_putchar('\n');
		line++;
	}
}

#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: The times table.
 */

void times_table(void)
{
	int i;
	int j;
	int val;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			val = i * j;
			_putchar(val);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

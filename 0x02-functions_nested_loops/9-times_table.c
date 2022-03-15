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
		_putchar('0');
		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');
			val = i * j;
			_putchar(val);
			if (val <= 9)
			{
				_putchar(' ');
			} else
			{
				_putchar((val / 10) + '0');
			}
		}
		_putchar('\n');
	}
}

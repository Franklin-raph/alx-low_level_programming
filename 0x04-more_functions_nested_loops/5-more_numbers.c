#include "main.h"
/**
 * more_numbers - Function to print all numbers from 1 to 14 ten times
 *
 * i: the variable for looping ten times
 * j: the variable to print all numbers
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		j = 48;
		k = 0;
		while (k <= 14)
		{
			if (k > 9)
			{
				_putchar('1');
			}
			_putchar(k);
			j++;
			if (k == 9)
				j = 48;
			k++;
		}
		_putchar('\n');
		i++;
	}
}

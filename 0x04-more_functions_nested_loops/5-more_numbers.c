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

	i = 0;
	j = 48;
	while (i < 10)
	{
		while (j <= 4952)
		{
			_putchar(j);
			j++;
		}
		i++;
	}
	_putchar('\n');
}

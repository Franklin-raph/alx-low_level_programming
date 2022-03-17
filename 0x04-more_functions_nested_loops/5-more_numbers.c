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

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

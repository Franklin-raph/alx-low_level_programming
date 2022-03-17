#include "main.h"

/**
 * print_most_numbers - Prints all numbers from 0 t0 9 except 2 and 4
 *
 * i: the variable to be checked
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}

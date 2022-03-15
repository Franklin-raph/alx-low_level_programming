#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: The times table.
 */

void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			return (i * j);
			putchar(', ');
		}
		putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code.
 *
 * @n: the parameter to start counting from
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		n = n;
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	} else
	{
		n = n;
		while (n > 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
}

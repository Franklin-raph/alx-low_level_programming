#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: The character to be checked
 *
 * Return: 1 if n is positive, 0 if n is zero else returns negative
 */

int print_sign(int n)
{
	char a;
	char b;
	char c;

	a = 43;
	b = 48;
	c = 45;
	if (n > 0)
	{
		_putchar(a);
		return (1);
	} else if (n == 0)
	{
		_putchar(b);
		return (0);
	} else if (n < 0)
	{
		_putchar(c);
		return (-1);
	}
}

#include "main.h"
/**
 * add - prints the result from the sum of two numbers
 * a - the variable to be added.
 * b - the variable to be added.
 *
 * Return: the sum of two numbers.
 */

int add(int a, int b)
{
	int val1;
	int val2;
	int ans;

	val1 = a % 10;
	val2 = b % 10;
	ans = val1 + val2;
	_putchar(ans);
	return (0);
}

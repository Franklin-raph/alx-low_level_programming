#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: The variable to checked
 *
 * Return: 1 if its a digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

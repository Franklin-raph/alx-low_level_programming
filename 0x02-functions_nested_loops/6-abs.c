#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: The integer to be checked.
 *
 * Return: The absolute value of a number
 */

int _abs(int r)
{

	if (r < 0)
	{
		return (r * -1);
	} else
		return (r);
	return (0);
}

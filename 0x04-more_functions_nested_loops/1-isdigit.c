#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: The variable to checked
 *
 * Return: 1 if its a digit else 0
 */

int _isdigit(int c)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		if(num % 10 == 0)
		{
			return (1);
		} else
		{
			return (0);
		}
		num++;
	}
}

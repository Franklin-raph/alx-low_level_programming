#include "main.h"
/**
 * _isupper - checks if a character is an upper case
 * @C: The character to be checked
 *
 * Return: 1 if its upper else returns 0
 */

int _isupper(int C)
{
	if (C >= 'A' && C <= 'Z')
		return (1);
	else
		return (0);
}

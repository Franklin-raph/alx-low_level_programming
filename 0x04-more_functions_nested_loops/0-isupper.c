#include "main.h"
/**
 * _isupper - checks if a character is an upper case
 * @C: The character to be checked
 *
 * Return: 1 if its upper else returns 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

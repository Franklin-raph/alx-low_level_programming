#include "main.h"
/**
 * _islower - Return 1 if c is lowcase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

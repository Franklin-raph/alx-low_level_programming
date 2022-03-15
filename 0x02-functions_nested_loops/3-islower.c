#include "main.h"
/**
 * _islower - Return 1 if c is lowcase else return 0
 */

int _islower(int c)
{
	int lower;
	char val

	lower = 0;
	val = 'a';
	while (val <= 'z')
	{
		if (val == c)
			lower = 1;
		else
			return (lower);
		val++;
	}	
}

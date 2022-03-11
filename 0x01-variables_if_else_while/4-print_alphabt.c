#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	i = 'a';

	do {

	}
	while (i != 'q' && i != 'e')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}

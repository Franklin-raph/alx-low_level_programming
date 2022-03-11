#include <stdio.h>

/**
 *main - Entry  point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char x;

	i = 0;
	x = 'a';

	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
		putchar('\n');
		return (0);
}

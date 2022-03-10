#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	float d;

	printf("Size of a char: %zu bytes\n", sizeof(a));
	printf("Size of a int: %zu bytes\n", sizeof(b));
	printf("Size of a long: %zu bytes\n", sizeof(c));
	printf("Size of a long: %zu bytes\n", sizeof(c));
	printf("Size of a float: %zu bytes\n", sizeof(d));
	return (0);
}

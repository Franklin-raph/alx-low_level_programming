#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("n is positive \n");
	} else if (n == 0){
		printf("n is zero \n");
	} else printf("n is negative \n ");
	/* your code goes there */
	return (0);
}

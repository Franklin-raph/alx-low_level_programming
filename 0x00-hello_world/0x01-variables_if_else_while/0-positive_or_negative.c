#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		pritntf("%zu is positive\n")
	} else if (n = 0){
		pritntf("%zu is zero\n")
	} else printf("%zu is negative\n ")
	/* your code goes there */
	return (0);
}
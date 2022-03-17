#include "main.h"
/**
 * more_numbers - Function to print all numbers from 1 to 14 ten times
 *
 * i: the variable for looping ten times
 * j: the variable to print all numbers
 */

void more_numbers(void)
{
        int i;
        int j;

        i = 0;
        while (i < 10)
        {
                j = 48
                while (j <= 14)
                {
                        if (j > 9)
                                _putchar(49);
                        _putchar(j);
                        j++;
                }
                _putchar('\n');
                i++;
        }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = 0;
	while (last < n)
	{
		last  = last + 1;
		if (last == n-1 && last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last == n-1 && last == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last);
		}
		else if (last == n-1 && last < 6 && last != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
}


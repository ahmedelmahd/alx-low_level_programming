#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

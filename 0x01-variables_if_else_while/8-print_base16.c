#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	char c;
	char n;

	c = 'a';
	n = 48;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

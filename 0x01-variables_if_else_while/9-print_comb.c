#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	int c;
	int C;
	int s;

	c = 48;
	C = 44;
	s = 32;
	while (c < 58)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(C);
			putchar(s);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

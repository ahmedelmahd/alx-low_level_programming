#include <stdio.h>
/**
 * main - iterate each letter of alphabet and print using putchar & while
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	char C = 'a';
	char c = 'A';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

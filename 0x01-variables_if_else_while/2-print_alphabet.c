#include <stdio.h>
/**
 * main - iterate each letter of alphabet and print using putchar & while
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}

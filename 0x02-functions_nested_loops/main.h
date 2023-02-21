#include <stdio.h>
/**
 * main - iterate each letter of alphabet and print using putchar & while
 *
 * Return: Always 0 ( Successful )
 */
void print_alphabet(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return;
}

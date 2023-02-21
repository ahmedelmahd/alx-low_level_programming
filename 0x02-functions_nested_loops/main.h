#include <stdio.h>
/**
 * main - iterate each letter of alphabet and print using putchar & while
 *
 * Return: Always 0 ( Successful )
 */
void print_alphabets(void)
{
	char c = 'a';
	int file = 1;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return;
}

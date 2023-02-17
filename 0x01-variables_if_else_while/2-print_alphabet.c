#include <stdio.h>
/**
 * main - iterates on each letter of the alphabet and prints it using putchar and while loop
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
	return 0;
}

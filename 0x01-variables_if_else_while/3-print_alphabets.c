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

        while (C <= 'z' && c <= 'Z')
        {
                putchar(C);
                C++;
		putchar(c);
		c++;
        }
        putchar('\n');
        return (0);
}

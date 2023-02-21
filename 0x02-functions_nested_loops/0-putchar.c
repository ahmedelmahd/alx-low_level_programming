#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	char *c = "_putchar\n";
	int file = 1;

	write(file, c, strlen(c));
	return (0);
}


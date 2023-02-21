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
	int file = 1; /* printing to the variable file which is standard output */
	
	write(file, c, strlen(c));
	return (0);
}

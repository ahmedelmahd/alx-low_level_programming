#include <string.h>
#include <unistd.h>
/**
 * adds the ability to use the function strlen()
 *
 * adds the ability to use the function write()
 *
 * a program that prints to the stdout without printf
 */
int main(void)
{
	char *c = "_putchar\n";
	int file = 1; /* printing to the variable file which is standard output */
	write (file, c, strlen(c));
	return (0);
}

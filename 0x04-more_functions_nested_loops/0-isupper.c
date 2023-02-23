#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	char char_input;

	printf("Enter a character: ");
	scanf("%c", &char_input);

	if (isupper(char_input))
	{
		printf("%c:", char_input);
		printf("1\n");
	}
	else
	{
		printf("%c:", char_input);
		printf("0\n");
	}
	return (0);
}


#include <stdio.h>
/**
 * main - entry point
 * prints fizz for anything multiplier of 3
 * buzz for anything multiplier for 5
 * fizzbuzz for anything multiplier by 15
 * Return: Always 0 ( Successful )
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf(" %d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}

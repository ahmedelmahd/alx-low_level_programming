#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 ( Successful )
 */
int main(void)
{
        int string[] = {95, 112, 117, 116, 99, 104, 97, 114};

        for (int i = 0; i < sizeof(string); i++)
        {
                _putchar(i);
        }
        _putchar('\n');
        return (0);
}

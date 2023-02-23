#include <stdio.h>
#include <ctype.h>

int main() 
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
    return 0;
}


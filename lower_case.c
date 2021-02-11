#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character ->");
    scanf("%c",&character);
    if(character >= 97 && character <= 122)
    {
        printf("Character is a lower case");
    }
    else
    {
        printf("Character is not a lower case.");
    }
    return 0;
}
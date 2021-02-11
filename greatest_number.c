#include<stdio.h>
int main()
{
    int number1,number2,number3,number4;
    printf("Enter number1 ->");
    scanf("%d",&number1);
    printf("Enter number2 ->");
    scanf("%d",&number2);
    printf("Enter number3 ->");
    scanf("%d",&number3);
    printf("Enter number4 ->");
    scanf("%d",&number4);
    if(number1 > number2 && number1 > number3 && number1 > number4)
    {
        printf("Greatest number is -> %d",number1);
    }
    else if (number2 > number1 && number2 > number3 && number2 > number4)
    {
        printf("Greatest number is -> %d",number2);
    }
    else if(number3 > number1 && number3 > number2 && number3 > number4)
    {
        printf("Greatest number is -> %d",number3);
    }
    else
    {
        printf("Greatest number is -> %d",number4);
    }
    return 0;
}
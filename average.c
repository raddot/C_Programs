#include<stdio.h>
float average_numbers(int num1,int num2,int num3);

int main()
{
    int num1,num2,num3;
    printf("---Average of 3 numbers---\n");
    printf("Enter number1 ->");
    scanf("%d,%d,%d",&num1);
    printf("Enter number2 ->");
    scanf("%d",&num2);
    printf("Enter number3 ->");
    scanf("%d",&num3);
    printf("Average of three numbers is -> %f",average_numbers(num1,num2,num3));
    return 0;
}

float average_numbers(int num1, int num2, int num3)
{
    float avg;
    avg= (float)(num1+num2+num3)/3;
    return avg;
}
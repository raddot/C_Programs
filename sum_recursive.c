#include<stdio.h>
int sum(int num);

int main()
{
    int num;
    printf("Enter the number ->");
    scanf("%d",&num);
    printf("Sum of numbers is %d",sum(num));
    return 0;
}

int sum(int num)
{
    if(num != 0)
    {
        return num + sum(num-1);
    }
    else
    {
        return num;
    }
}
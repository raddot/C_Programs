#include<stdio.h>
int main()
{
    int number,cnt;
    int flag;
    printf("---To check if number is prime number---\n");
    printf("Enter the number ->");
    scanf("%d",&number);
    for (cnt=2;cnt<number;cnt++)
    {
        if(number%cnt==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1 && number!=2)
    {
        printf("Number is not a prime number");
    }
    else
    {
        printf("Number is a prime number");
    }
    
    return 0;
}
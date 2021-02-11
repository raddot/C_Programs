#include<stdio.h>
int main()
{
    int number,cnt=1,factorial=1;
    printf("Factorial of a number---\n");
    printf("Enter the number ->");
    scanf("%d",&number);
    while(cnt <= number)
    {
        factorial *= cnt;
        cnt++;
    }
    printf("Factorial is -> %d",factorial);
    return 0;
}
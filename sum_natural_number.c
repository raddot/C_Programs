#include<stdio.h>
int main()
{
    int cnt=10,n=10,sum=0;
    printf("---Sum of first 10 natural numbers---\n");
    do
    {
        sum = sum + cnt;
        cnt--;
    } while (cnt!=0);
    
    printf("Sum of numbers is -> %d ",sum);
    return 0;
}
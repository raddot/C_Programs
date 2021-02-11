#include<stdio.h>
int main()
{
    int cnt,number=8,sum=0,num;
    for(cnt=1;cnt<=10;cnt++)
    {
        num = number * cnt;
        sum += num;
    }
    printf("Sum is -> %d",sum);
    return 0;
}
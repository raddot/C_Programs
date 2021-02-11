#include<stdio.h>
int main()
{
    int cnt,number;
    printf("Enter number ->");
    scanf("%d",&number);
    printf("---Multiplication Table of N integer---\n");
    for(cnt=1;cnt<=10;cnt++)
    {
        printf("%d X %d = %d\n",number,cnt,number*cnt);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int cnt,number;
    printf("Enter the number ->");
    scanf("%d",&number);
    printf("Multiplication table of N\n");
    for(cnt=10;cnt>0;cnt--)
    {
        printf("%d X %d = %d\n",number,cnt,number*cnt);
    }
    return 0;
}
#include<stdio.h>
void pattern(int num);

int main()
{
    printf("---Pattern is ---\n");
    int num=4;
    pattern(num);
    return 0;
}

void pattern(int num)
{
    int cnt;
    if(num==1)
    {
        printf("*\n");
        return;
    }
    pattern(num-1);
    for(cnt=0;cnt<2*num-1;cnt++)
    {
        printf("*");
    }
    printf("\n");
}


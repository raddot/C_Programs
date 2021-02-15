#include<stdio.h>
int main()
{
    int cnt,mult[10];
    for (cnt=0;cnt<10;cnt++)
    {
        mult[cnt] = 5*(cnt+1);
    }

    for (cnt=0;cnt<10;cnt++)
    {
        printf("5 X %d = %d\n",cnt+1,mult[cnt]);
    }
    
    return 0;
}
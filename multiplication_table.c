#include<stdio.h>

void printTable(int *mul_tab,int num, int n)
{
    printf("Multiplication Table of %d is ->\n",num);
    for(int i=0;i<n;i++)
    {
        mul_tab[i] = num*(i+1);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d X %d = %d\n",num,i+1,mul_tab[i]);
    }
    printf("-----------------------------------\n");
}

int main()
{
    int mul_tab[3][10];
    printTable(mul_tab[0],2,10);
    printTable(mul_tab[1],7,10);
    printTable(mul_tab[2],9,10);
    return 0;
}
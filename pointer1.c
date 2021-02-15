#include<stdio.h>

void printAdd(int a)
{
    printf("Address of a is %u\n",&a);
}

int main()
{
    int i=5;
    printf("Value of i is %d\n",i);
    printAdd(i);
    printf("Address of i is %d\n",&i);
    return 0;
}
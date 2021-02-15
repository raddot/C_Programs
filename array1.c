#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;
    if(ptr==&arr[2])
    {
        printf("These are same locations in memory\n");
    }
    else
    {
        printf("These are not same locations in memory\n");
    }
    return 0;
}
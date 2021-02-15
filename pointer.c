#include<stdio.h>
int main()
{
    int num=6;
    int *ptr;
    ptr=&num;
    printf("The value of num is %d\n",num);
    printf("The value of num is %d\n",*ptr);
    printf("The address of num is %u\n",ptr);
}